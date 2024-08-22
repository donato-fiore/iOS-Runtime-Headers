// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBWRITEREQUEST_H
#define CBWRITEREQUEST_H

@class NSArray, NSError;

#import <Foundation/Foundation.h>


@interface CBWriteRequest : NSObject {
    iovec _iov;
    *iovec _iop;
    int _ion;
    NSUInteger _offset;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSArray *dataArray; // ivar: _dataArray
@property (nonatomic) BOOL endOfData; // ivar: _endOfData
@property (readonly, nonatomic) NSError *error; // ivar: _error




@end


#endif