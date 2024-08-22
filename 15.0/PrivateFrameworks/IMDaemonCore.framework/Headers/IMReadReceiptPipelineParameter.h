// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMREADRECEIPTPIPELINEPARAMETER_H
#define IMREADRECEIPTPIPELINEPARAMETER_H

@class NSString, NSArray, NSNumber;
@protocol IMReadReceiptProcessingParameter, IMMessageFromStorageParameter;

#import <Foundation/Foundation.h>

#import "IMDChat.h"

@interface IMReadReceiptPipelineParameter : NSObject <IMReadReceiptProcessingParameter, IMMessageFromStorageParameter>



@property (copy, nonatomic) NSString *GUID; // ivar: _GUID
@property (retain, nonatomic) IMDChat *chat; // ivar: _chat
@property (copy, nonatomic) NSString *fromIdentifier; // ivar: _fromIdentifier
@property (copy, nonatomic) NSString *fromPushID; // ivar: _fromPushID
@property (nonatomic) BOOL isFromDefaultPairedDevice; // ivar: _isFromDefaultPairedDevice
@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (nonatomic) BOOL isFromStorage; // ivar: _isFromStorage
@property (nonatomic) BOOL isLastFromStorage; // ivar: _isLastFromStorage
@property (retain, nonatomic) NSArray *messageItems; // ivar: _messageItems
@property (retain, nonatomic) NSNumber *timestamp; // ivar: _timestamp


-(id)description;
-(id)initWithBD:(id)arg0 ;


@end


#endif