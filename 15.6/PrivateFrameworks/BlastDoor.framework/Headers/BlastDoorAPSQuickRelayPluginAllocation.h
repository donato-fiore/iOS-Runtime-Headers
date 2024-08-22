// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORAPSQUICKRELAYPLUGINALLOCATION_H
#define BLASTDOORAPSQUICKRELAYPLUGINALLOCATION_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface BlastDoorAPSQuickRelayPluginAllocation : NSObject {
    ? aPSQuickRelayPluginAllocation;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_participantId;
@property (nonatomic, readonly) BOOL has_pluginStream;
@property (nonatomic, readonly) NSInteger participantId;
@property (nonatomic, readonly) NSString *pluginName;
@property (nonatomic, readonly) NSInteger pluginStream;
@property (nonatomic, readonly) NSData *relayAccessToken;
@property (nonatomic, readonly) NSData *relaySessionKey;


-(id)init;


@end


#endif