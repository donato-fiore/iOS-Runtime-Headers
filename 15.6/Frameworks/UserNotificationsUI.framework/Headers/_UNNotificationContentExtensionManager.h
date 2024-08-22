// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UNNOTIFICATIONCONTENTEXTENSIONMANAGER_H
#define _UNNOTIFICATIONCONTENTEXTENSIONMANAGER_H


#import <Foundation/Foundation.h>

#import "_UNNotificationContentExtensionCache.h"

@interface _UNNotificationContentExtensionManager : NSObject

@property (retain, nonatomic) _UNNotificationContentExtensionCache *extensionsCache; // ivar: _extensionsCache
@property (retain, nonatomic) id *extensionsDiscoveryToken; // ivar: _extensionsDiscoveryToken


+(id)sharedInstance;
+(void)initialize;
-(id)_matchingAttributes;
-(id)extensionForNotificationSourceIdentifier:(id)arg0 categoryIdentifier:(id)arg1 ;
-(id)init;
-(void)_beginMatchingExtensions;
-(void)_stopMatchingExtensions;


@end


#endif