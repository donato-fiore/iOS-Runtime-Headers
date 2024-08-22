// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBREADREQUEST_H
#define CBREADREQUEST_H

@class NSMutableData, NSData, NSError;

#import <Foundation/Foundation.h>


@interface CBReadRequest : NSObject {
    char * _bufferPtr;
}


@property (retain, nonatomic) NSMutableData *bufferData; // ivar: _bufferData
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) NSUInteger maxLength; // ivar: _maxLength
@property (nonatomic) NSUInteger minLength; // ivar: _minLength




@end


#endif