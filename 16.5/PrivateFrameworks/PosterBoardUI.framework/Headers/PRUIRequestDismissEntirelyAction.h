// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRUIREQUESTDISMISSENTIRELYACTION_H
#define PRUIREQUESTDISMISSENTIRELYACTION_H

@class BSAction;



@interface PRUIRequestDismissEntirelyAction : BSAction

@property (readonly, nonatomic) BOOL shouldActivateCurrentPoster;


+(id)actionActivatingCurrentPoster:(BOOL)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif