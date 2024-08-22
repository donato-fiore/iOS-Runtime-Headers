// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPERSISTENTINVITEREPLYNOTIFICATION_H
#define EKPERSISTENTINVITEREPLYNOTIFICATION_H



#import "EKPersistentNotification.h"

@interface EKPersistentInviteReplyNotification : EKPersistentNotification



+(Class)meltedClass;
+(id)defaultPropertiesToLoad;
+(id)relations;
-(BOOL)alerted;
-(NSUInteger)shareeStatus;
-(id)creationDate;
-(id)inReplyTo;
-(id)inviteReplyCalendar;
-(id)shareeDisplayName;
-(id)shareeFirstName;
-(id)shareeLastName;
-(id)shareeURLString;
-(id)summary;
-(int)entityType;
-(void)setCreationDate:(id)arg0 ;
-(void)setInReplyTo:(id)arg0 ;
-(void)setInviteReplyCalendar:(id)arg0 ;
-(void)setShareeDisplayName:(id)arg0 ;
-(void)setShareeFirstName:(id)arg0 ;
-(void)setShareeLastName:(id)arg0 ;
-(void)setShareeStatus:(NSUInteger)arg0 ;
-(void)setShareeURLString:(id)arg0 ;
-(void)setSummary:(id)arg0 ;


@end


#endif