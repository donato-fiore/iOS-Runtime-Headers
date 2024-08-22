// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUWRITEREQUEST_H
#define CUWRITEREQUEST_H

@class NSArray, NSError;

#import <Foundation/Foundation.h>


@interface CUWriteRequest : NSObject {
    iovec _iov;
    *iovec _iop;
    int _ion;
    NSUInteger _offset;
    unsigned char _messageUUID;
}


@property (readonly, nonatomic) *iovec bytesIOArray; // ivar: _bytesIOArray
@property (nonatomic) NSUInteger bytesIOCount; // ivar: _bytesIOCount
@property (readonly, nonatomic) NSUInteger bytesIOMaxCount; // ivar: _bytesIOMaxCount
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSArray *dataArray; // ivar: _dataArray
@property (nonatomic) BOOL endOfData; // ivar: _endOfData
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL hasMessageUUID; // ivar: _hasMessageUUID
@property (readonly, nonatomic) char * messageUUID;


-(id)init;


@end


#endif