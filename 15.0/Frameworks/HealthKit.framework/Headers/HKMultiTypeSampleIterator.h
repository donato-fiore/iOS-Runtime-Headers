// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMULTITYPESAMPLEITERATOR_H
#define HKMULTITYPESAMPLEITERATOR_H

@class NSArray, NSMutableArray, NSString;
@protocol HKIterator;

#import <Foundation/Foundation.h>

#import "HKQueryAnchor.h"
#import "HKHealthStore.h"
#import "HKSampleIteratorQueryCursor.h"
#import "HKSample.h"

@interface HKMultiTypeSampleIterator : NSObject <HKIterator>

 {
    NSArray *_queryDescriptors;
    NSArray *_sortDescriptors;
    HKQueryAnchor *_followingAnchor;
    HKQueryAnchor *_upToAndIncludingAnchor;
    NSArray *_distinctByKeyPaths;
    NSUInteger _bufferSize;
    NSUInteger _limit;
    HKHealthStore *_healthStore;
    NSUInteger _state;
    HKSampleIteratorQueryCursor *_queryCursor;
    NSMutableArray *_buffer;
    HKSample *_current;
    NSUInteger _numberOfSamplesDelivered;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HKSample *sample;
@property (readonly) Class superclass;


-(BOOL)_queryForNextPageIfNecessaryWithError:(*id)arg0 ;
-(BOOL)advanceWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithQueryDescriptors:(id)arg0 sortDescriptors:(id)arg1 bufferSize:(NSInteger)arg2 healthStore:(id)arg3 ;
-(id)initWithQueryDescriptors:(id)arg0 sortDescriptors:(id)arg1 followingAnchor:(id)arg2 upToAndIncludingAnchor:(id)arg3 distinctByKeyPaths:(id)arg4 bufferSize:(NSUInteger)arg5 limit:(NSUInteger)arg6 healthStore:(id)arg7 ;
-(id)object;


@end


#endif