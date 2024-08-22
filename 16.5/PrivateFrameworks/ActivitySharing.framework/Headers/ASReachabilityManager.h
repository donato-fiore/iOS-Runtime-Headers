// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASREACHABILITYMANAGER_H
#define ASREACHABILITYMANAGER_H

@class NSOperationQueue, NSString;

#import <Foundation/Foundation.h>

#import "ASReachabilityStatusCache.h"

@interface ASReachabilityManager : NSObject {
    ASReachabilityStatusCache *_statusCache;
    NSOperationQueue *_queryOperationQueue;
}


@property (readonly, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier


+(id)sharedInstanceForServiceIdentifier:(id)arg0 ;
-(NSInteger)numberOfScheduledQueries;
-(id)_initWithServiceIdentifer:(id)arg0 ;
-(id)init;
// -(void)_addDestinationsToQuery:(id)arg0 updateHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(void)queryDestinations:(id)arg0 updateHandler:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif