// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSORTEDSAMPLEITERATOR_H
#define HDSORTEDSAMPLEITERATOR_H

@class NSArray, HKSortedQueryAnchor, NSSet, NSError, NSString, HKDeletedObject, HKSample;
@protocol HDSampleIterator, HDDeletedObjectIterator;

#import <Foundation/Foundation.h>

#import "HDQueryDescriptor.h"
#import "HDProfile.h"

@interface HDSortedSampleIterator : NSObject <HDSampleIterator, HDDeletedObjectIterator>

 {
    HDQueryDescriptor *_queryDescriptor;
    BOOL _includeDeletedObjects;
    NSArray *_sortDescriptors;
    HKSortedQueryAnchor *_anchor;
    NSInteger _bufferSize;
    NSSet *_restrictedSourceEntities;
    HDProfile *_profile;
    NSError *_lastError;
    BOOL _isComplete;
    vector<std::tuple<long long, HKSample *>, std::allocator<std::tuple<long long, HKSample *>>> _sampleBuffer;
    vector<std::tuple<long long, HKDeletedObject *>, std::allocator<std::tuple<long long, HKDeletedObject *>>> _deletedObjectsBuffer;
    tuple<long long, HKSample *> _currentSample;
    tuple<long long, HKDeletedObject *> _currentDeletedObject;
    id *_currentHead;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HKDeletedObject *deletedObject;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HKSortedQueryAnchor *nextAnchor;
@property (readonly, nonatomic) NSInteger objectID;
@property (readonly, nonatomic) HKSample *sample;
@property (readonly) Class superclass;


-(BOOL)advanceWithError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithQueryDescriptor:(id)arg0 includeDeletedObjects:(BOOL)arg1 sortDescriptors:(id)arg2 anchor:(id)arg3 bufferSize:(NSInteger)arg4 profile:(id)arg5 ;
-(id)object;


@end


#endif