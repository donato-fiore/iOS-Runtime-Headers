// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUIREMOTEALERTBUTTONACTION_H
#define SBUIREMOTEALERTBUTTONACTION_H

@class BSAction;



@interface SBUIRemoteAlertButtonAction : BSAction

@property (readonly, nonatomic) NSUInteger events;


-(id)initWithEvents:(NSUInteger)arg0 ;
-(id)initWithEvents:(NSUInteger)arg0 withHandler:(id)arg1 ;
-(id)settings:(id)arg0 keyDescriptionForSetting:(NSUInteger)arg1 ;
-(id)settings:(id)arg0 valueDescriptionForFlag:(NSInteger)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3 ;
-(void)sendResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)sendResponseWithUnHandledEvents:(NSUInteger)arg0 ;


@end


#endif