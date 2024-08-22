// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUMFIREADREQUEST_H
#define CUMFIREADREQUEST_H


#import <Foundation/Foundation.h>

#import "CUMFiReadRequest.h"

@interface CUMFiReadRequest : NSObject {
    NSUInteger minLen;
    NSUInteger maxLen;
    CUMFiReadRequest *next;
}


@property (copy, nonatomic) id *completion; // ivar: _completion




@end


#endif