// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPAUDIOVIDEOROUTINGPOPOVERCONTROLLER_H
#define MPAUDIOVIDEOROUTINGPOPOVERCONTROLLER_H

@class UIPopoverController, NSString;
@protocol MPAVRoutingViewControllerDelegate;


#import "MPAVRoutingViewController.h"

@interface MPAudioVideoRoutingPopoverController : UIPopoverController <MPAVRoutingViewControllerDelegate>

 {
    int _airPlayPasswordAlertDidAppearToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    BOOL _mirroringIncluded;
    MPAVRoutingViewController *_routingViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL mirroringOnly; // ivar: _mirroringOnly
@property (readonly) Class superclass;


-(id)initWithContentViewController:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 includeMirroring:(BOOL)arg1 ;
-(id)routingController;
-(void)dealloc;
-(void)routingViewController:(id)arg0 didPickRoute:(id)arg1 ;
-(void)routingViewControllerDidUpdateContents:(id)arg0 ;


@end


#endif