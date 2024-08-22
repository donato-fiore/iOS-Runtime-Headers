// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYSHARDDOWNLOADER_H
#define HDONTOLOGYSHARDDOWNLOADER_H

@class HKObserverSet<HDOntologyShardDownloaderObserver>;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDOntologyUpdateCoordinator.h"

@interface HDOntologyShardDownloader : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet<HDOntologyShardDownloaderObserver> *_ontologyShardDownloaderObservers;
}


@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator; // ivar: _updateCoordinator


-(id)init;
-(id)initWithOntologyUpdateCoordinator:(id)arg0 ;
-(void)addOntologyShardDownloaderObserver:(id)arg0 queue:(id)arg1 ;
-(void)downloadRequiredShardFilesWithSession:(id)arg0 completion:(id)arg1 ;
-(void)removeOntologyShardDownloaderObserver:(id)arg0 ;


@end


#endif