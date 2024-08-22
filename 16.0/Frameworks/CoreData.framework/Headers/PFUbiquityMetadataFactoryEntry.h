// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYMETADATAFACTORYENTRY_H
#define PFUBIQUITYMETADATAFACTORYENTRY_H


#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"
#import "NSPersistentStoreCoordinator.h"
#import "NSPersistentStore.h"
#import "PFUbiquityMetadataFactoryFilePresenter.h"

@interface PFUbiquityMetadataFactoryEntry : NSObject {
    PFUbiquityLocation *_metadataStoreFileLocation;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    PFUbiquityMetadataFactoryFilePresenter *_filePresenter;
}




-(id)description;
-(id)init;
-(id)initWithMetadataStoreFileLocation:(id)arg0 ;
-(void)dealloc;


@end


#endif