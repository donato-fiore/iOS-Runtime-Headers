// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKORGANIZER_H
#define EKORGANIZER_H



#import "EKParticipant.h"

@interface EKOrganizer : EKParticipant



+(Class)frozenClass;
+(id)organizerWithName:(id)arg0 emailAddress:(id)arg1 phoneNumber:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
-(BOOL)isCurrentUser;
-(NSInteger)scheduleAgent;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 emailAddress:(id)arg1 phoneNumber:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
-(id)owner;
-(void)setCurrentUser:(BOOL)arg0 ;


@end


#endif