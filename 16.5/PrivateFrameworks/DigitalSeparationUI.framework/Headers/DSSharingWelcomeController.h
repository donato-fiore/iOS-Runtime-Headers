// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSSHARINGWELCOMECONTROLLER_H
#define DSSHARINGWELCOMECONTROLLER_H

@class NSString;
@protocol DSController, DSNavigationDelegate;


#import "DSOBWelcomeController.h"

@interface DSSharingWelcomeController : DSOBWelcomeController <DSController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)viewDidLoad;


@end


#endif