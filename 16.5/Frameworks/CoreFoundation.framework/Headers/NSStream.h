// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSTREAM_H
#define NSSTREAM_H

@class NSError;
@protocol NSStreamDelegate;

#import <Foundation/Foundation.h>


@interface NSStream : NSObject

@property NSObject<NSStreamDelegate> *delegate;
@property (readonly, copy) NSError *streamError;
@property (readonly) NSUInteger streamStatus;




@end


#endif