// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKAPPLICATIONDELEGATE_H
#define TSKAPPLICATIONDELEGATE_H

@class NSString;
@protocol TSKApplicationDelegate, TSKCompatibilityDelegate;

#import <Foundation/Foundation.h>


@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate>



@property (readonly, getter=isActivating) BOOL activating;
@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) BOOL centerOnInitialSelection;
@property (retain, nonatomic) NSObject<TSKCompatibilityDelegate> *compatibilityDelegate; // ivar: _compatibilityDelegate
@property (readonly, nonatomic) BOOL designModeEnabled;
@property (readonly, nonatomic) NSString *documentTypeDisplayName;
@property (readonly, getter=isInBackground) BOOL inBackground;
@property (readonly, nonatomic) BOOL isCanvasFullScreen;
@property (readonly, nonatomic) BOOL performanceModeEnabled;
@property (readonly, nonatomic) BOOL tableCellInspectorShowsNaturalAlignment;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property (readonly, nonatomic) NSString *templateTypeDisplayName;
@property (readonly, nonatomic) BOOL textInspectorShowsMoreSubpane;


+(BOOL)isUnitTesting;
+(id)documentDirectoryPath;
+(id)sharedDelegate;
+(void)setSurrogateDelegate:(id)arg0 ;
-(BOOL)openURL:(id)arg0 ;
-(BOOL)openURL:(id)arg0 sourceDocumentRoot:(id)arg1 ;
-(BOOL)shouldGenerateGuidesForOffscreenLayouts;
-(BOOL)shouldRenderContactShadow;
-(BOOL)shouldRenderCurvedShadow;
-(BOOL)shouldValidateMasterLayoutWhileInsertingRows;
-(BOOL)supportsRTL;
-(BOOL)supportsScrollingInPhoneCommentUI;
-(id)appChartPropertyOverrides;
-(id)createCompatibilityDelegate;
-(id)defaultHyperlinkURL;
-(id)init;
-(id)invalidURLSchemes;
-(id)previewImageForType:(id)arg0 ;
-(id)toolbarButtonForModalDoneWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)validURLSchemes;
-(struct CGRect )applicationToolbarFrame;
-(void)dealloc;


@end


#endif