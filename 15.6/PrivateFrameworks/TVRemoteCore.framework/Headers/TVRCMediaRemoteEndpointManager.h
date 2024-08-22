// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRCMEDIAREMOTEENDPOINTMANAGER_H
#define TVRCMEDIAREMOTEENDPOINTMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TVRCMediaRemoteEndpointManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaRemoteQueue; // ivar: _mediaRemoteQueue


+(id)sharedInstance;
-(id)init;
-(void)fetchActiveEndpointWithCompletion:(id)arg0 ;
-(void)updateActiveEndpoint:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif