// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMRECOVERJUNKCOMMANDPIPELINEPARAMETER_H
#define IMRECOVERJUNKCOMMANDPIPELINEPARAMETER_H

@class NSString, NSArray, NSNumber;
@protocol IMRecoverJunkCommandProcessingParameter, IMMessageFromStorageParameter;

#import <Foundation/Foundation.h>

#import "IMDChat.h"

@interface IMRecoverJunkCommandPipelineParameter : NSObject <IMRecoverJunkCommandProcessingParameter, IMMessageFromStorageParameter>



@property (readonly, copy, nonatomic) NSString *GUID; // ivar: _GUID
@property (retain, nonatomic) IMDChat *chat; // ivar: _chat
@property (readonly, nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (readonly, nonatomic) BOOL isFromStorage; // ivar: _isFromStorage
@property (readonly, nonatomic) BOOL isLastFromStorage; // ivar: _isLastFromStorage
@property (copy, nonatomic) NSArray *messageItems; // ivar: _messageItems
@property (readonly, nonatomic) NSNumber *timestamp; // ivar: _timestamp


-(id)description;
-(id)initWithDefusedMessage:(id)arg0 isFromMe:(BOOL)arg1 ;


@end


#endif