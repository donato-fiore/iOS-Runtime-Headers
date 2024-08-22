// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFERRORALERTCONTROLLER_H
#define WFERRORALERTCONTROLLER_H

@class UIAlertController;
@protocol WFNetworkView, WFErrorProviderContext;



@interface WFErrorAlertController : UIAlertController <WFNetworkView>



@property (retain, nonatomic) NSObject<WFErrorProviderContext> *context; // ivar: _context
@property (readonly, nonatomic) BOOL wantsModalPresentation;


+(id)errorAlertControllerWithContext:(id)arg0 ;
-(BOOL)_canShowWhileLocked;


@end


#endif