// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCCHARTVIEW_H
#define CCCHARTVIEW_H

@class UIView, NSString, NSDictionary, NSArray, NSMutableSet, NSLocale, NSCalendar, NSLayoutConstraint, UIAccessibilityElement;
@protocol CCChartViewDelegate;


#import "CCVegaWorker.h"
#import "CCVegaWorkerClient.h"
#import "CCVegaRenderer.h"

@interface CCChartView : UIView {
    CCVegaWorker *_worker;
    CCVegaWorkerClient *_workerClient;
    CCVegaRenderer *_renderer;
    NSString *_baseConfigType;
    NSString *_rendererType;
    NSString *_config;
    NSDictionary *_configDictionary;
    NSString *_spec;
    NSDictionary *_specDictionary;
    CGFloat _zoomFactor;
    NSArray *_legacyData;
    NSMutableSet *_knownNamedDatasets;
    BOOL _preventGestures;
    BOOL _caUpdateFromBackground;
    NSLocale *_locale;
    NSCalendar *_calendar;
    BOOL _didCustomizeLocale;
    BOOL _didCustomizeCalendar;
    CGFloat _rendererWidth;
    CGFloat _rendererHeight;
    NSUInteger _translatesChartSizeIntoConstraints;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
}


@property (nonatomic) BOOL CATransactionFromBackgroundThread;
@property (readonly) *CGImage CGImage;
@property (retain) UIAccessibilityElement *accessibilityDataSeriesElement; // ivar: _accessibilityDataSeriesElement
@property (retain) NSArray *accessibilityDataSeriesElements;
@property (retain, nonatomic) NSString *baseConfig;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain) NSString *config;
@property (retain) NSDictionary *configDictionary;
@property (nonatomic) CGFloat contentScaleFactor;
@property (retain, nonatomic) NSArray *data;
@property (weak) NSObject<CCChartViewDelegate> *delegate; // ivar: delegate
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSString *rendererType;
@property (retain) NSString *spec;
@property (retain) NSDictionary *specDictionary;
@property (nonatomic) NSUInteger translatesChartSizeIntoConstraints;
@property (nonatomic) CGFloat zoomFactor;


+(id)JSONStringFromDictionary:(id)arg0 ;
+(id)compileSpec:(id)arg0 config:(id)arg1 baseConfig:(id)arg2 expressionFunctionNames:(id)arg3 error:(*id)arg4 ;
+(id)compileSpecDictionary:(id)arg0 configDictionary:(id)arg1 baseConfig:(id)arg2 expressionFunctionNames:(id)arg3 error:(*id)arg4 ;
+(id)configForBaseConfigType:(id)arg0 ;
+(id)dictionaryFromJSONString:(id)arg0 ;
+(id)getBenchmarkRecords;
+(id)unwrapJSValue:(id)arg0 ;
+(void)cleanUp;
+(void)preloadFrameworkAssets;
// +(void)registerExpressionFunction:(id)arg0 withName:(unk)arg1  ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(NSInteger)accessibilityContainerType;
-(id)accessibilityElements;
// -(id)addListener:(id)arg0 toSignalWithName:(unk)arg1  ;
-(id)colorNamed:(id)arg0 ;
-(id)dynamicColorNamed:(id)arg0 ;
-(id)eventToMouseEvent:(id)arg0 ;
-(id)getSignalWithName:(id)arg0 ;
-(id)imageNamed:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSpec:(id)arg0 ;
-(id)initWithSpec:(id)arg0 config:(id)arg1 ;
-(id)initWithSpec:(id)arg0 config:(id)arg1 options:(id)arg2 ;
-(id)loadChartDataFromURL:(id)arg0 error:(*id)arg1 ;
-(id)localizedStringNamed:(id)arg0 ;
-(id)renderToImageWithType:(NSUInteger)arg0 ;
-(id)renderer;
-(void)changeConstraints;
-(void)changeDefaultDatasetByInserting:(id)arg0 removingIDs:(id)arg1 ;
-(void)changeNamedDataset:(id)arg0 inserting:(id)arg1 removingIDs:(id)arg2 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)initialize;
-(void)lazilyInitializeRenderer;
-(void)mouseHoverGestureRecognized:(id)arg0 ;
-(void)refreshLocaleAndCalendar;
// -(void)registerExpressionFunction:(id)arg0 withName:(unk)arg1  ;
// -(void)registerLocalExpressionFunction:(id)arg0 withName:(unk)arg1  ;
-(void)reinitializeRenderer;
-(void)removeListener:(id)arg0 fromSignalWithName:(id)arg1 ;
-(void)render;
-(void)rendererDidUpdate;
-(void)setAccessibilityElements:(id)arg0 ;
-(void)setDefaultDataset:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNamedDataset:(id)arg0 rows:(id)arg1 ;
-(void)setRenderer:(id)arg0 ;
-(void)setSignalWithName:(id)arg0 toValue:(id)arg1 ;
-(void)setupWithSpec:(id)arg0 ;
-(void)setupWithSpec:(id)arg0 options:(id)arg1 ;
-(void)setupWithSpecDictionary:(id)arg0 ;
-(void)setupWithSpecDictionary:(id)arg0 options:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)triggerMouseEvent:(id)arg0 type:(id)arg1 ;
-(void)triggerMouseEvent:(id)arg0 type:(id)arg1 setConsumed:(BOOL)arg2 ;


@end


#endif