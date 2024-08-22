// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPERSISTENTORGANIZER_H
#define EKPERSISTENTORGANIZER_H

@class NSString;


#import "EKPersistentParticipant.h"

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) NSString *displayNameRaw;
@property (retain, nonatomic) NSString *emailAddress;
@property (nonatomic) BOOL isCurrentUser;


+(Class)meltedClass;
+(id)defaultPropertiesToLoad;
+(id)organizerWithName:(id)arg0 emailAddress:(id)arg1 address:(id)arg2 isCurrentUser:(BOOL)arg3 ;
+(id)relations;
-(NSInteger)scheduleAgent;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 emailAddress:(id)arg1 address:(id)arg2 isCurrentUser:(BOOL)arg3 ;
-(id)owner;
-(int)entityType;
-(void)setOwner:(id)arg0 ;
-(void)setScheduleAgent:(NSInteger)arg0 ;


@end


#endif