// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGREQUESTDISMISSALACTION_H
#define PREDITINGREQUESTDISMISSALACTION_H

@class BSAction;



@interface PREditingRequestDismissalAction : BSAction

@property (readonly, nonatomic) BOOL userAcceptedChanges;


-(id)initWithUserAcceptedChanges:(BOOL)arg0 completion:(id)arg1 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif