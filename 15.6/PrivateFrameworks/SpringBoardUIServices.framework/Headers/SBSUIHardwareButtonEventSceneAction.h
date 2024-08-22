// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSUIHARDWAREBUTTONEVENTSCENEACTION_H
#define SBSUIHARDWAREBUTTONEVENTSCENEACTION_H

@class BSAction;



@interface SBSUIHardwareButtonEventSceneAction : BSAction

@property (readonly, nonatomic) NSInteger buttonEventType;


-(id)initWithButtonEventType:(NSInteger)arg0 timeout:(CGFloat)arg1 withResponseHandler:(id)arg2 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)sendResponse:(id)arg0 ;


@end


#endif