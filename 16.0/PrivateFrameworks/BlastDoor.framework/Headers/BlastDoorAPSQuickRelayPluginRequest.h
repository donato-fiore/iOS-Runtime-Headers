// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORAPSQUICKRELAYPLUGINREQUEST_H
#define BLASTDOORAPSQUICKRELAYPLUGINREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorAPSQuickRelayPluginRequest : NSObject {
    ? aPSQuickRelayPluginRequest;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_pluginDevMode;
@property (nonatomic, readonly) BOOL has_pluginStream;
@property (nonatomic, readonly) NSString *pluginConfig;
@property (nonatomic, readonly) BOOL pluginDevMode;
@property (nonatomic, readonly) NSString *pluginName;
@property (nonatomic, readonly) NSInteger pluginStream;


-(id)init;


@end


#endif