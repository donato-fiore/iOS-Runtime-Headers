// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBBUNDLEPROPERTIESLSPROVIDER_H
#define RBBUNDLEPROPERTIESLSPROVIDER_H

@class NSCache, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, RBBundlePropertiesLSProviderDelegate;

#import <Foundation/Foundation.h>


@interface RBBundlePropertiesLSProvider : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    NSCache *_propertiesByIdentity;
    id<RBBundlePropertiesLSProviderDelegate> *_delegate;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RBBundlePropertiesLSProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)propertiesForIdentity:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;


@end


#endif