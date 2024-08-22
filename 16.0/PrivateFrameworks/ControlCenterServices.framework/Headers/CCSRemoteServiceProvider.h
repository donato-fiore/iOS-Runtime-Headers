// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCSREMOTESERVICEPROVIDER_H
#define CCSREMOTESERVICEPROVIDER_H

@class NSXPCListener, NSHashTable, NSString;
@protocol NSXPCListenerDelegate, CCSRemoteServiceServerProtocol;

#import <Foundation/Foundation.h>

#import "CCSModuleRepository.h"
#import "CCSModuleSettingsProvider.h"

@interface CCSRemoteServiceProvider : NSObject <NSXPCListenerDelegate, CCSRemoteServiceServerProtocol>

 {
    CCSModuleRepository *_moduleRepository;
    CCSModuleSettingsProvider *_settingsProvider;
    NSXPCListener *_listener;
    NSHashTable *_presentationEndpoints;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)initialize;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_init;
-(void)dealloc;
-(void)enumerateEndpointsUsingBlock:(id)arg0 ;
-(void)getEnabledStateOfModuleWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
-(void)presentModuleWithIdentifier:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)registerEndpoint:(id)arg0 ;
-(void)requestAvailableModuleIdentifiersWithCompletionHandler:(id)arg0 ;
-(void)requestDisableModuleWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestEnableModuleWithIdentifier:(id)arg0 force:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)resume;
-(void)setVisibility:(BOOL)arg0 forModuleWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif