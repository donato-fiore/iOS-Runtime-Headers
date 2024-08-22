// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDCACHEDELETESERVICE_H
#define FPDCACHEDELETESERVICE_H


#import <Foundation/Foundation.h>

#import "FPDExtensionManager.h"

@interface FPDCacheDeleteService : NSObject

@property (retain, nonatomic) FPDExtensionManager *extensionManager; // ivar: _extensionManager


-(BOOL)getVolume:(*int)arg0 forPath:(id)arg1 ;
-(id)allStorageVolumes;
-(id)nonPurgableSpacePerProviderOnVolume:(id)arg0 ;
-(void)enumerateFPFSDomainsUsingBlock:(id)arg0 ;
-(void)enumerateProviderDomainOnVolume:(id)arg0 usingBlock:(id)arg1 ;
-(void)registerActivity;
-(void)start;


@end


#endif