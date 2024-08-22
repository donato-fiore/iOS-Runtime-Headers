// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDCOMPLICATIONHOSTINGVIEW_H
#define CDCOMPLICATIONHOSTINGVIEW_H

@class UIView, NSString, NSData;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "_TtC19ComplicationDisplay20_ComplicationHosting.h"

@interface CDComplicationHostingView : UIView <CLKMonochromeComplicationView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _TtC19ComplicationDisplay20_ComplicationHosting *hosting; // ivar: _hosting
@property (nonatomic) BOOL paused;
@property (copy, nonatomic) id *renderStatsHandler;
@property (readonly, nonatomic) BOOL rendersAsynchronously;
@property (nonatomic) BOOL shouldAccentDesaturatedView;
@property (nonatomic) BOOL shouldCallRenderStatsHandlerOnMainQueue;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *viewData;


+(id)async;
+(id)sync;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 async:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;
-(void)waitForAsyncRendering;


@end


#endif