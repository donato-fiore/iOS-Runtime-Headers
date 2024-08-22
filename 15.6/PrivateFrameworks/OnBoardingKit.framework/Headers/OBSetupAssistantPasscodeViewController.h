// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBSETUPASSISTANTPASSCODEVIEWCONTROLLER_H
#define OBSETUPASSISTANTPASSCODEVIEWCONTROLLER_H

@class NSString;
@protocol OBSetupAssistantSupport;


#import "OBWelcomeController.h"

@interface OBSetupAssistantPasscodeViewController : OBWelcomeController <OBSetupAssistantSupport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldAnimateEntireView;
-(void)animateDetailText:(id)arg0 animationType:(NSUInteger)arg1 heightDifference:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif