// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIDSREADREQUEST_H
#define CUIDSREADREQUEST_H


#import <Foundation/Foundation.h>

#import "CUIDSReadRequest.h"

@interface CUIDSReadRequest : NSObject {
    NSUInteger minLen;
    NSUInteger maxLen;
    char * buffer;
    NSUInteger len;
    CUIDSReadRequest *next;
}


@property (copy, nonatomic) id *completion; // ivar: _completion




@end


#endif