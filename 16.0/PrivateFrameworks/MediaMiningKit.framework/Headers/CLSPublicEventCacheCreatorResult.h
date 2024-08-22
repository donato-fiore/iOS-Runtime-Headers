// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSPUBLICEVENTCACHECREATORRESULT_H
#define CLSPUBLICEVENTCACHECREATORRESULT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CLSPublicEventCacheCreatorResult : NSObject

@property (retain, nonatomic) NSDictionary *invalidationTokenByTimeLocationIdentifier; // ivar: _invalidationTokenByTimeLocationIdentifier
@property (nonatomic) NSUInteger numberOfRequests; // ivar: _numberOfRequests
@property (retain, nonatomic) NSDictionary *resolvedPublicEventsByTimeLocationIdentifier; // ivar: _resolvedPublicEventsByTimeLocationIdentifier


-(id)init;


@end


#endif