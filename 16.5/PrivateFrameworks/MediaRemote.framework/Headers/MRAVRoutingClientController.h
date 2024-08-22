// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRAVROUTINGCLIENTCONTROLLER_H
#define MRAVROUTINGCLIENTCONTROLLER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRMediaRemoteService.h"

@interface MRAVRoutingClientController : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_pendingCompletionHandlersForCategories;
    NSMutableDictionary *_cachedRoutesForCategories;
}


@property (readonly, nonatomic) MRMediaRemoteService *mediaRemoteService; // ivar: _mediaRemoteService


-(id)init;
-(id)initWithMediaRemoteService:(id)arg0 ;
-(void)_pickableRoutesDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)fetchPickableRoutesForCategory:(id)arg0 completion:(id)arg1 ;


@end


#endif