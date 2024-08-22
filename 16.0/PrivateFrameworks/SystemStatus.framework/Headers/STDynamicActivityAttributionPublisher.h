// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STDYNAMICACTIVITYATTRIBUTIONPUBLISHER_H
#define STDYNAMICACTIVITYATTRIBUTIONPUBLISHER_H

@class NSXPCConnection, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STDynamicActivityAttributionPublisher : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_serverXPCConnection;
    NSString *_cachedLocalizedPlistKey;
    NSString *_cachedAppBundleID;
}




+(void)setCurrentAttributionKey:(id)arg0 andApp:(id)arg1 ;
+(void)setCurrentAttributionLocalizableKey:(id)arg0 auditToken:(struct ? )arg1 ;
+(void)setCurrentAttributionStringWithFormat:(id)arg0 auditToken:(struct ? )arg1 ;
+(void)setCurrentAttributionWebsiteString:(id)arg0 auditToken:(struct ? )arg1 ;
-(id)init;


@end


#endif