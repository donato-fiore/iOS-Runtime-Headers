// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCKSHAREUNKNOWNPARTICIPANT_H
#define ICCKSHAREUNKNOWNPARTICIPANT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ICCKShareUnknownParticipant : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *participantUserID; // ivar: _participantUserID


-(id)initWithParticipantUserID:(id)arg0 ;


@end


#endif