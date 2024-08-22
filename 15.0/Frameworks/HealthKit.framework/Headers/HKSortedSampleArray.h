// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSORTEDSAMPLEARRAY_H
#define HKSORTEDSAMPLEARRAY_H

@class NSMutableArray, NSMutableDictionary, NSSortDescriptor;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface HKSortedSampleArray : NSObject <NSFastEnumeration>

 {
    NSMutableArray *_samples;
    NSMutableDictionary *_samplesByUUID;
}


@property (retain, nonatomic) NSSortDescriptor *sortDescriptor; // ivar: _sortDescriptor


-(BOOL)insertSamples:(id)arg0 ;
-(BOOL)removeSample:(id)arg0 ;
-(BOOL)removeSampleAtIndex:(NSInteger)arg0 ;
-(BOOL)removeSamplesWithUUIDs:(id)arg0 ;
-(NSInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allSamples;
-(id)description;
-(id)init;
-(id)reverseSampleEnumerator;
-(id)sampleAtIndex:(NSInteger)arg0 ;
-(id)sampleEnumerator;
-(void)_addResultsToUUIDMappingRemovingDuplicates:(id)arg0 ;
-(void)removeAllSamples;


@end


#endif