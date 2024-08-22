// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPCLUSTER_H
#define CHIPCLUSTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHIPCluster : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue


-(*void)getCluster;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(struct Span<const char> )asCharSpan:(id)arg0 ;
-(struct Span<const unsigned char> )asByteSpan:(id)arg0 ;


@end


#endif