// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUREADREQUEST_H
#define CUREADREQUEST_H

@class NSMutableData, NSData, NSError;

#import <Foundation/Foundation.h>


@interface CUReadRequest : NSObject {
    char * _bufferPtr;
    unsigned char _messageUUID;
}


@property (nonatomic) *void bufferBytes; // ivar: _bufferBytes
@property (retain, nonatomic) NSMutableData *bufferData; // ivar: _bufferData
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL hasMessageUUID; // ivar: _hasMessageUUID
@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) NSUInteger maxLength; // ivar: _maxLength
@property (readonly, nonatomic) char * messageUUID;
@property (nonatomic) NSUInteger minLength; // ivar: _minLength
@property (nonatomic) unsigned int statusFlags; // ivar: _statusFlags




@end


#endif