// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPCLIPOVERLAYVIEW_H
#define SBAPPCLIPOVERLAYVIEW_H

@class SBFTouchPassThroughView, NSString;
@protocol BSInvalidatable, SBAppClipOverlayViewDelegate;



@interface SBAppClipOverlayView : SBFTouchPassThroughView <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBAppClipOverlayViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 delegate:(id)arg1 ;
-(void)invalidate;


@end


#endif