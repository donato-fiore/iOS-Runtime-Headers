// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRUIREQUESTDISMISSALACTION_H
#define PRUIREQUESTDISMISSALACTION_H

@class BSAction;



@interface PRUIRequestDismissalAction : BSAction

@property (readonly, nonatomic, getter=isAnimated) BOOL animated;


+(id)actionWithAnimation:(BOOL)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif