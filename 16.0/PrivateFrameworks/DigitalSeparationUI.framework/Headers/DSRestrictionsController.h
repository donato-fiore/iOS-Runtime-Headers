// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSRESTRICTIONSCONTROLLER_H
#define DSRESTRICTIONSCONTROLLER_H

@class OBTextWelcomeController, NSString;
@protocol DSController, DSNavigationDelegate;



@interface DSRestrictionsController : OBTextWelcomeController <DSController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldShow;
-(id)init;
-(id)restrictionList;
-(void)learnMoreRestrictionsPressed;
-(void)viewDidLoad;


@end


#endif