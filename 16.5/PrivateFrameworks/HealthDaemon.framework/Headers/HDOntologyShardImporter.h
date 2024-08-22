// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDONTOLOGYSHARDIMPORTER_H
#define HDONTOLOGYSHARDIMPORTER_H

@class NSDictionary, HKObserverSet<HDOntologyShardImporterObserver>;

#import <Foundation/Foundation.h>

#import "HDOntologyUpdateCoordinator.h"

@interface HDOntologyShardImporter : NSObject {
    os_unfair_lock_s _lock;
    NSDictionary *_lock_importerClassesBySchemaType;
    HKObserverSet<HDOntologyShardImporterObserver> *_ontologyShardImporterObservers;
}


@property (readonly, copy, nonatomic) NSDictionary *importerClasses;
@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator; // ivar: _updateCoordinator


-(BOOL)importStagedShardFilesWithError:(*id)arg0 ;
-(id)init;
-(id)initWithOntologyUpdateCoordinator:(id)arg0 ;
-(void)addOntologyShardImporterObserver:(id)arg0 queue:(id)arg1 ;
-(void)removeOntologyShardImporterObserver:(id)arg0 ;


@end


#endif