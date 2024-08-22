// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWURLSESSIONMULTIPARTBOUNDARYRECOGNIZER_H
#define NWURLSESSIONMULTIPARTBOUNDARYRECOGNIZER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NWURLSessionMultipartBoundaryRecognizer : NSObject {
    NSString *_pattern;
    char * _rollbackBuffer;
    NSUInteger _rollbackBufferCapacity;
    NSUInteger _start;
    NSUInteger _end;
}




-(void)dealloc;


@end


#endif