// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKGREENTEADATAUSAGERESOLVER_H
#define NPKGREENTEADATAUSAGERESOLVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKGreenTeaDataUsageResolver : NSObject

@property (nonatomic) BOOL currentlyResolving; // ivar: _currentlyResolving
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue


+(void)resolveGreenTeaDataUsageIfNecessary;
-(id)init;
-(void)_resolveGreenTeaDataUsageIfNecessaryWithCompletion:(id)arg0 ;
-(void)resolveGreenTeaDataUsageIfNecessary;


@end


#endif