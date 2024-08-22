// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEMORYPLANNERPHOTOKITSOURCE_H
#define PGMEMORYPLANNERPHOTOKITSOURCE_H

@class PHPhotoLibrary, NSString;
@protocol PGMemoryPlannerPastSource, OS_os_log;

#import <Foundation/Foundation.h>


@interface PGMemoryPlannerPhotoKitSource : NSObject <PGMemoryPlannerPastSource>

 {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)translateLegacyMemoryCategory:(NSUInteger)arg0 subcategory:(NSUInteger)arg1 toNewMemoryCategory:(*NSUInteger)arg2 triggerType:(*NSUInteger)arg3 ;
-(id)initWithPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;
-(id)memoriesToAvoidForConfiguration:(id)arg0 withGraph:(id)arg1 progressReporter:(id)arg2 ;
-(id)pastMemoriesForConfiguration:(id)arg0 withGraph:(id)arg1 progressReporter:(id)arg2 ;
-(id)triggeredMemoriesFromPersistedMemories:(id)arg0 withGraph:(id)arg1 progressReporter:(id)arg2 ;


@end


#endif