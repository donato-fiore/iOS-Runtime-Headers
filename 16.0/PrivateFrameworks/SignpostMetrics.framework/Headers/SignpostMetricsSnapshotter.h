// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTMETRICSSNAPSHOTTER_H
#define SIGNPOSTMETRICSSNAPSHOTTER_H

@protocol OSLogCoding;

#import <Foundation/Foundation.h>


@interface SignpostMetricsSnapshotter : NSObject <OSLogCoding>





-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif