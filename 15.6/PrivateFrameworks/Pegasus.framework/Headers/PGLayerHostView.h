// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGLAYERHOSTVIEW_H
#define PGLAYERHOSTVIEW_H

@class UIView, _UIRemoteView, BKSTouchDeliveryPolicyAssertion;


#import "PGHostedWindowHostingHandle.h"

@interface PGLayerHostView : UIView {
    _UIRemoteView *_remoteView;
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;
}


@property (nonatomic) CGFloat cornerRadiusScale; // ivar: _cornerRadiusScale
@property (retain, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_manageSharingOfTouchesBetweenClientAndHostContext;
-(void)dealloc;
-(void)didMoveToWindow;


@end


#endif