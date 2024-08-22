// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLRESOURCEDATASTOREMANAGER_H
#define PLRESOURCEDATASTOREMANAGER_H


#import <Foundation/Foundation.h>


@interface PLResourceDataStoreManager : NSObject



+(id)storeExternalResources:(id)arg0 forAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2 error:(*id)arg3 ;
+(id)storeForExternalResource:(id)arg0 inLibraryWithID:(id)arg1 ;
+(id)storesForLibraryID:(id)arg0 ;
+(id)updateDerivativeResourcesForAsset:(id)arg0 forLifecycleEvent:(unsigned int)arg1 ;


@end


#endif