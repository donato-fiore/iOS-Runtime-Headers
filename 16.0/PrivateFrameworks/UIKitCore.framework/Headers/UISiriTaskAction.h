// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISIRITASKACTION_H
#define UISIRITASKACTION_H

@class BSAction, AFSiriTask;



@interface UISiriTaskAction : BSAction

@property (readonly, retain, nonatomic) AFSiriTask *payload;


-(NSInteger)UIActionType;
-(id)initWithInfo:(id)arg0 timeout:(CGFloat)arg1 forResponseOnQueue:(id)arg2 withHandler:(id)arg3 ;
-(id)initWithPayload:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif