// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKDELETIONRESULT_H
#define NNMKDELETIONRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NNMKProtoMessageDeletions.h"

@interface NNMKDeletionResult : NSObject

@property (retain, nonatomic) NSArray *protectedMessageIds; // ivar: _protectedMessageIds
@property (retain, nonatomic) NNMKProtoMessageDeletions *protectedProtobuf; // ivar: _protectedProtobuf
@property (retain, nonatomic) NSArray *unprotectedDefaultMessageIds; // ivar: _unprotectedDefaultMessageIds
@property (retain, nonatomic) NNMKProtoMessageDeletions *unprotectedDefaultProtobuf; // ivar: _unprotectedDefaultProtobuf
@property (retain, nonatomic) NSArray *unprotectedNotificationMessageIds; // ivar: _unprotectedNotificationMessageIds
@property (retain, nonatomic) NNMKProtoMessageDeletions *unprotectedNotificationProtobuf; // ivar: _unprotectedNotificationProtobuf




@end


#endif