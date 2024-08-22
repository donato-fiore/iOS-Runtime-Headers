// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSCONTEXTPROVIDERSERVICE_H
#define CLSCONTEXTPROVIDERSERVICE_H

@class NSExtension, NSUUID, NSArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CLSContextProviderExtensionHostContext.h"
#import "CLSContextProviderExtensionContext.h"

@interface CLSContextProviderService : NSObject {
    NSObject<OS_dispatch_queue> *_serviceConnectionQueue;
    NSExtension *_extension;
    NSUUID *_sessionUUID;
    CLSContextProviderExtensionHostContext *_extensionHostContext;
    CLSContextProviderExtensionContext *_extensionContext;
    NSArray *_mainAppContextPath;
    uint8_t _connectionCount;
}


@property (readonly, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (readonly, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly, nonatomic) NSString *localizedAppName; // ivar: _localizedAppName


-(id)description;
-(id)init;
-(id)initWithExtension:(id)arg0 ;
-(void)connectWithCompletionHandler:(id)arg0 ;
-(void)disconnect;
-(void)getMainAppContextPathWithCompletion:(id)arg0 ;
-(void)updateDescendantsOfContextPath:(id)arg0 completion:(id)arg1 ;


@end


#endif