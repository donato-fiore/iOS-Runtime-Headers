// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBBUNDLEPROPERTIESMANAGER_H
#define RBBUNDLEPROPERTIESMANAGER_H

@class NSString;
@protocol RBBundlePropertiesLSProviderDelegate, RBBundlePropertiesManaging, RBStateCapturing, RBBundlePropertiesManagerDelegate;

#import <Foundation/Foundation.h>

#import "RBBundlePropertiesLSProvider.h"
#import "RBBundlePropertiesBSXPCProvider.h"
#import "RBProcessIndex.h"

@interface RBBundlePropertiesManager : NSObject <RBBundlePropertiesLSProviderDelegate, RBBundlePropertiesManaging, RBStateCapturing>

 {
    RBBundlePropertiesLSProvider *_lsProvider;
    RBBundlePropertiesBSXPCProvider *_xpcProvider;
    RBProcessIndex *_processIndex;
    id<RBBundlePropertiesManagerDelegate> *_delegate;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RBBundlePropertiesManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;


-(id)captureState;
-(id)init;
-(id)propertiesForIdentity:(id)arg0 identifier:(id)arg1 ;
-(void)addProcess:(id)arg0 ;
-(void)bundlePropertiesProvider:(id)arg0 didChangePropertiesForProcessIdentities:(id)arg1 ;
-(void)removeProcess:(id)arg0 ;


@end


#endif