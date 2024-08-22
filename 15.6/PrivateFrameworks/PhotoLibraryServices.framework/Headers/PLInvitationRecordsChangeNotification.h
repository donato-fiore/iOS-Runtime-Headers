// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLINVITATIONRECORDSCHANGENOTIFICATION_H
#define PLINVITATIONRECORDSCHANGENOTIFICATION_H

@class NSDictionary;


#import "PLContainerChangeNotification.h"
#import "PLGenericAlbum.h"

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification {
    BOOL _invitationRecordsDidChange;
    NSDictionary *_userInfo;
}


@property (readonly, nonatomic) PLGenericAlbum *album;
@property (readonly, nonatomic) BOOL invitationRecordsDidChange;


+(id)notificationWithAlbum:(id)arg0 snapshot:(id)arg1 ;
-(id)name;
-(id)userInfo;
-(void)_calculateDiffs;


@end


#endif