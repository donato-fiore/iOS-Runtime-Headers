// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSTASKINGMESSAGE_H
#define DRSTASKINGMESSAGE_H

@class NSDictionary;


#import "DRSTaskingSystemMessage.h"

@interface DRSTaskingMessage : DRSTaskingSystemMessage

@property (readonly, nonatomic) NSDictionary *teamTaskings; // ivar: _teamTaskings


+(id)messageType;
-(BOOL)_isEqualToMessage:(id)arg0 ;
-(BOOL)_versionIsSupported:(id)arg0 ;
-(id)initWithJSONDict:(id)arg0 ;
-(id)initWithVersion:(id)arg0 messageUUID:(id)arg1 dateBroadcast:(id)arg2 dateReceived:(id)arg3 teamTaskings:(id)arg4 ;
-(id)jsonDictRepresentation;


@end


#endif