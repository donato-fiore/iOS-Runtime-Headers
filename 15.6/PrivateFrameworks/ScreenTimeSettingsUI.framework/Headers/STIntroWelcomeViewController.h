// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STINTROWELCOMEVIEWCONTROLLER_H
#define STINTROWELCOMEVIEWCONTROLLER_H

@class OBWelcomeController, NSString;



@interface STIntroWelcomeViewController : OBWelcomeController

@property (readonly, copy) NSString *childName; // ivar: _childName
@property (readonly, copy) id *continueHandler; // ivar: _continueHandler


-(id)initWithChildName:(id)arg0 continueHandler:(id)arg1 ;
-(void)_continue:(id)arg0 ;
-(void)loadView;


@end


#endif