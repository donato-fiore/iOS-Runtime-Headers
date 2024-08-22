// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMARKUNREADREQUESTPIPELINEPARAMETER_H
#define IMMARKUNREADREQUESTPIPELINEPARAMETER_H

@class NSString, NSArray, NSNumber;
@protocol IMMarkUnreadRequestProcessingParameter, IMMessageFromStorageParameter;

#import <Foundation/Foundation.h>

#import "IMDChat.h"

@interface IMMarkUnreadRequestPipelineParameter : NSObject <IMMarkUnreadRequestProcessingParameter, IMMessageFromStorageParameter>



@property (copy, nonatomic) NSString *GUID; // ivar: _GUID
@property (retain, nonatomic) IMDChat *chat; // ivar: _chat
@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (nonatomic) BOOL isFromStorage; // ivar: _isFromStorage
@property (nonatomic) BOOL isLastFromStorage; // ivar: _isLastFromStorage
@property (retain, nonatomic) NSArray *messageItems; // ivar: _messageItems
@property (retain, nonatomic) NSNumber *timestamp; // ivar: _timestamp


-(id)description;
-(id)initWithBD:(id)arg0 isFromMe:(BOOL)arg1 ;


@end


#endif