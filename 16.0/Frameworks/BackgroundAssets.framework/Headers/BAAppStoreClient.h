// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BAAPPSTORECLIENT_H
#define BAAPPSTORECLIENT_H


#import <Foundation/Foundation.h>

#import "BAAgentSystemProxy.h"

@interface BAAppStoreClient : NSObject {
    BAAgentSystemProxy *_systemProxy;
}




-(BOOL)applicationWasInstalledWithApplicationIdentifier:(id)arg0 appFileURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)applicationWasUpdatedWithApplicationIdentifier:(id)arg0 appFileURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)grantInitialBackgroundActivityWithApplicationIdentifier:(id)arg0 appStoreMetadata:(id)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif