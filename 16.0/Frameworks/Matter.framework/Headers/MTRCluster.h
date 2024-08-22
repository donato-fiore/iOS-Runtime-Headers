// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCLUSTER_H
#define MTRCLUSTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTRCluster : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue


-(id)initWithQueue:(id)arg0 ;
-(struct Span<const char> )asCharSpan:(id)arg0 ;
-(struct Span<const unsigned char> )asByteSpan:(id)arg0 ;


@end


#endif