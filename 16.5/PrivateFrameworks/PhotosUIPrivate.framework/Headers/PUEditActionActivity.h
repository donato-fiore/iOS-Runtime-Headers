// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUEDITACTIONACTIVITY_H
#define PUEDITACTIONACTIVITY_H

@class UIActivity, NSString;



@interface PUEditActionActivity : UIActivity

@property (copy, nonatomic) NSString *actionName; // ivar: _actionName
@property (copy, nonatomic) id *activityBlock; // ivar: _activityBlock
@property (copy, nonatomic) id *canPerformActivityActionHandler; // ivar: _canPerformActivityActionHandler
@property (nonatomic) BOOL disablesInsteadOfHides; // ivar: _disablesInsteadOfHides
@property (retain, nonatomic) NSString *internalActivityType; // ivar: _internalActivityType
@property (copy, nonatomic) id *performActivityActionHandler; // ivar: _performActivityActionHandler
@property (copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName


+(NSInteger)activityCategory;
-(BOOL)_isDisabled;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityTitle;
-(id)activityType;
-(id)initWithActionName:(id)arg0 activityType:(id)arg1 systemImageName:(id)arg2 ;
-(void)performActivity;


@end


#endif