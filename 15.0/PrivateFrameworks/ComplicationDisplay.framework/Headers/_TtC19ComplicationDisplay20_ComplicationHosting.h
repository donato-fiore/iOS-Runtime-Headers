// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19COMPLICATIONDISPLAY20_COMPLICATIONHOSTING_H
#define _TTC19COMPLICATIONDISPLAY20_COMPLICATIONHOSTING_H

@class UIView, NSData;
@protocol CLKMonochromeFilterProvider;



@interface _TtC19ComplicationDisplay20_ComplicationHosting : UIView {
    ? inPreview;
    ? model;
    ? isMonochrome;
    ? hostingViewController;
    ? renderStatsHandler;
    ? viewData;
}


@property (nonatomic, retain) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: filterProvider
@property (nonatomic) BOOL paused; // ivar: paused
@property (nonatomic, copy) id *renderStatsHandler;
@property (nonatomic, readonly) BOOL rendersAsynchronously; // ivar: rendersAsynchronously
@property (nonatomic) BOOL shouldAccentDesaturatedView; // ivar: shouldAccentDesaturatedView
@property (nonatomic) BOOL shouldCallRenderStatsHandlerOnMainQueue; // ivar: shouldCallRenderStatsHandlerOnMainQueue
@property (nonatomic) BOOL supportsComplicationForeground; // ivar: supportsComplicationForeground
@property (nonatomic, readonly) UIView *view; // ivar: view
@property (nonatomic, copy) NSData *viewData;


+(id)async;
+(id)sync;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 async:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)waitForAsyncRendering;


@end


#endif