// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STINTROWELCOMEVIEWCONTROLLER_H
#define STINTROWELCOMEVIEWCONTROLLER_H

@class OBWelcomeController, NSString;



@interface STIntroWelcomeViewController : OBWelcomeController

@property (readonly, copy) NSString *childName; // ivar: _childName
@property (readonly, copy) id *continueHandler; // ivar: _continueHandler
@property (readonly, copy) id *endHandler; // ivar: _endHandler
@property (readonly) BOOL forceParentalControls; // ivar: _forceParentalControls


// -(id)initWithChildName:(id)arg0 forceParentalControls:(BOOL)arg1 continueHandler:(id)arg2 endHandler:(unk)arg3  ;
-(void)_notNow:(id)arg0 ;
-(void)_turnOnScreenTime:(id)arg0 ;
-(void)loadView;


@end


#endif