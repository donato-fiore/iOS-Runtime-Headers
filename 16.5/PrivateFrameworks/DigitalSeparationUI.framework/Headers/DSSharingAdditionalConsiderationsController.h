// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSSHARINGADDITIONALCONSIDERATIONSCONTROLLER_H
#define DSSHARINGADDITIONALCONSIDERATIONSCONTROLLER_H

@class NSString;
@protocol DSController, DSNavigationDelegate;


#import "DSOBWelcomeController.h"

@interface DSSharingAdditionalConsiderationsController : DSOBWelcomeController <DSController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)back;
-(void)viewDidLoad;


@end


#endif