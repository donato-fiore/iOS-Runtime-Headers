// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCONTACTSSEARCHOPERATION_H
#define MFCONTACTSSEARCHOPERATION_H

@class NSOperation, NSString, NSNumber;


#import "MFContactsSearchManager.h"

@interface MFContactsSearchOperation : NSOperation

@property (readonly, nonatomic) MFContactsSearchManager *owner; // ivar: _owner
@property (readonly, nonatomic) NSString *sendingAddress; // ivar: _sendingAddress
@property (readonly, nonatomic) NSNumber *taskID; // ivar: _taskID
@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSUInteger type;


+(id)operationWithOwner:(id)arg0 text:(id)arg1 taskID:(id)arg2 ;


@end


#endif