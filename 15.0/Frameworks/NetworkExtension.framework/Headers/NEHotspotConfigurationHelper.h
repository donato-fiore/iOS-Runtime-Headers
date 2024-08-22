// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEHOTSPOTCONFIGURATIONHELPER_H
#define NEHOTSPOTCONFIGURATIONHELPER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEHelper.h"

@interface NEHotspotConfigurationHelper : NSObject {
    NEHelper *_helper;
}


@property (readonly) NEHelper *helper;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedManager;
-(id)createXPCRequest:(id)arg0 requestType:(NSInteger)arg1 ;
-(id)init;
-(id)processQueryNetworksResponse:(id)arg0 ;
-(void)sendRequest:(id)arg0 requestType:(NSInteger)arg1 resultHandler:(id)arg2 ;


@end


#endif