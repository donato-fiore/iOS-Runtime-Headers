// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSCANCELTASKINGMESSAGE_H
#define DRSCANCELTASKINGMESSAGE_H

@class NSDictionary;


#import "DRSTaskingSystemMessage.h"

@interface DRSCancelTaskingMessage : DRSTaskingSystemMessage

@property (readonly, nonatomic) NSDictionary *perTeamCancelledConfigUUIDs; // ivar: _perTeamCancelledConfigUUIDs


+(id)messageType;
-(BOOL)_isEqualToMessage:(id)arg0 ;
-(BOOL)_versionIsSupported:(id)arg0 ;
-(id)initWithJSONDict:(id)arg0 ;
-(id)initWithVersion:(id)arg0 messageUUID:(id)arg1 dateBroadcast:(id)arg2 dateReceived:(id)arg3 perTeamCancelledConfigUUIDs:(id)arg4 ;
-(id)jsonDictRepresentation;


@end


#endif