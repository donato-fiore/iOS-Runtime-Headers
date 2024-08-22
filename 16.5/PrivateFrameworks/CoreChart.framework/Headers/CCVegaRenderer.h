// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCVEGARENDERER_H
#define CCVEGARENDERER_H

@class NSLocale, NSCalendar, NSMutableSet, CALayer, NSArray, UITraitCollection, NSString, JSValue;
@protocol CCAsyncQueueDelegate, CCVegaWorkerClientDelegate, CCVegaRendererDelegate;

#import <Foundation/Foundation.h>

#import "CCVegaExpressionFunctions.h"
#import "CCVegaCARenderer.h"
#import "CCAsyncQueue.h"
#import "CCVegaHTMLElement.h"
#import "CCViewRendererDelegate.h"
#import "CCVegaWorker.h"
#import "CCVegaWorkerClient.h"

@interface CCVegaRenderer : NSObject <CCAsyncQueueDelegate, CCVegaWorkerClientDelegate>

 {
    NSLocale *_locale;
    NSCalendar *_calendar;
    CCVegaExpressionFunctions *_builtinExpressionFunctions;
    CGFloat _width;
    CGFloat _height;
    *CGImage _currentCGImage;
    CGFloat _currentCGImageScaleFactor;
    BOOL _needsUpdateFromMainThread;
    NSMutableSet *_pendingDataUpdates;
    CGFloat _internalScaleFactor;
    CGFloat _internalZoomFactor;
    CALayer *_caLayer;
    NSArray *_data;
    BOOL _isActive;
    CGFloat _scaleFactor;
    CGFloat _zoomFactor;
    UITraitCollection *_traitCollection;
}


@property (retain) CCVegaCARenderer *CARenderer; // ivar: CARenderer
@property (retain, nonatomic) CCAsyncQueue *asyncQueue; // ivar: asyncQueue
@property (retain) CALayer *caLayer;
@property (retain) NSCalendar *calendar;
@property (retain, nonatomic) NSString *config; // ivar: config
@property (retain, nonatomic) CCVegaHTMLElement *container; // ivar: container
@property *CGImage currentCGImage; // ivar: currentCGImage
@property (retain, nonatomic) NSArray *data;
@property (weak) NSObject<CCVegaRendererDelegate> *delegate; // ivar: delegate
@property BOOL isActive;
@property (retain) NSLocale *locale;
@property (retain, nonatomic) JSValue *renderer; // ivar: renderer
@property unsigned int rendererType; // ivar: rendererType
@property CGFloat scaleFactor;
@property (retain, nonatomic) NSString *spec; // ivar: spec
@property (readonly) BOOL specIsValid;
@property (retain) UITraitCollection *traitCollection;
@property (retain) CCViewRendererDelegate *viewDelegate; // ivar: viewDelegate
@property (retain) CCVegaWorker *worker; // ivar: worker
@property (retain) CCVegaWorkerClient *workerClient; // ivar: workerClient
@property CGFloat zoomFactor;


-(BOOL)hasPendingDataUpdate:(id)arg0 ;
-(CGFloat)currentBitmapScaleFactor;
-(CGFloat)height;
-(CGFloat)width;
-(id)accessibilityElements;
// -(id)addListener:(id)arg0 toSignalWithName:(unk)arg1  ;
-(id)cursor;
-(id)fontOptions;
-(id)getSignalWithName:(id)arg0 ;
-(id)initWithSpec:(id)arg0 config:(id)arg1 options:(id)arg2 workerClient:(id)arg3 ;
-(id)newDataWithPDFImage;
-(id)saveStateWithNamedDatasets:(id)arg0 ;
-(id)vegaContext;
-(struct CGColor *)newColorFromCSSString:(id)arg0 ;
-(struct CGColor *)newColorFromCSSString:(id)arg0 alpha:(CGFloat)arg1 ;
-(struct CGImage *)currentBitmap;
-(struct CGImage *)newImageFromURL:(id)arg0 ;
-(struct CGImage *)renderToCGImage;
-(void)_doUpdateInMainThread;
-(void)addPendingDataUpdate:(id)arg0 ;
-(void)changeDefaultDatasetByInserting:(id)arg0 removingIDs:(id)arg1 ;
-(void)changeNamedDataset:(id)arg0 inserting:(id)arg1 removingIDs:(id)arg2 ;
-(void)changeNamedDataset:(id)arg0 inserting:(id)arg1 removingWithCallback:(id)arg2 ;
-(void)clearPendingDataUpdates;
-(void)dealloc;
-(void)displayWithCommitter:(id)arg0 ;
-(void)enqueueRunAsync;
-(void)loadState:(id)arg0 ;
-(void)refreshNativeSignals;
-(void)refreshNativeSignalsRerunDataflow:(BOOL)arg0 ;
-(void)removeListener:(id)arg0 fromSignalWithName:(id)arg1 ;
-(void)rerender;
-(void)rerenderEntireChart;
-(void)runAsync;
-(void)runAsyncWithCallback:(id)arg0 ;
-(void)scheduleDisplay;
-(void)setDefaultDataset:(id)arg0 ;
-(void)setNamedDataset:(id)arg0 rows:(id)arg1 ;
-(void)setSignalWithName:(id)arg0 toValue:(id)arg1 ;
-(void)setSize:(struct CGSize )arg0 ;
-(void)setupScreenSignal;
-(void)setupSignalHandlers;
-(void)simplifyQueue:(id)arg0 ;
-(void)triggerEventWithType:(id)arg0 event:(id)arg1 waitForEventHandling:(BOOL)arg2 ;
-(void)updateInMainThreadIfNeeded;
-(void)updateNativeView;
-(void)updateScaleFactor:(CGFloat)arg0 zoomFactor:(CGFloat)arg1 ;


@end


#endif