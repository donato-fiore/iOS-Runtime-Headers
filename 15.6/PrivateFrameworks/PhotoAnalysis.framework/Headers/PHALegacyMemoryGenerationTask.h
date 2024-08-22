// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHALEGACYMEMORYGENERATIONTASK_H
#define PHALEGACYMEMORYGENERATIONTASK_H

@class NSString;
@protocol PHATask;

#import <Foundation/Foundation.h>


@interface PHALegacyMemoryGenerationTask : NSObject <PHATask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat period;
@property (readonly) Class superclass;


-(BOOL)_shouldGenerateMiroMovie;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;
-(NSInteger)_miroMoodForMemoryMood:(NSUInteger)arg0 ;
-(NSInteger)_phTitleCategoryForPGTitleCategory:(NSInteger)arg0 ;
-(NSUInteger)_memoryMoodForMiroMood:(NSInteger)arg0 ;
-(id)_featureVectorWithMemory:(id)arg0 photoLibrary:(id)arg1 ;
-(id)_infoForGraphCollectionBasedMemory:(id)arg0 ;
-(id)_infoForMemory:(id)arg0 representativeAssetCount:(NSUInteger)arg1 isTransientMemory:(BOOL)arg2 graphManager:(id)arg3 ;
-(id)_infoForMomentsBackingMemory:(id)arg0 ;
-(id)_minimalLegacyFeatureVectorWithMemory:(id)arg0 ;
-(void)_processMoodForMemory:(id)arg0 withMoodHistory:(id)arg1 moodGenerationContext:(id)arg2 graphManager:(id)arg3 ;
// -(void)generateMemoriesWithOptions:(id)arg0 graphManager:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;


@end


#endif