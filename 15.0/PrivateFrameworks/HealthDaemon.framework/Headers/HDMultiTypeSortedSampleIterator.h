// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDMULTITYPESORTEDSAMPLEITERATOR_H
#define HDMULTITYPESORTEDSAMPLEITERATOR_H

@class NSArray, HKSortedQueryAnchor, NSMutableArray, NSString, HKDeletedObject, HKSample;
@protocol HDSampleIterator, HDDeletedObjectIterator, HDRestorableIterator;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDSortedSampleIterator.h"

@interface HDMultiTypeSortedSampleIterator : NSObject <HDSampleIterator, HDDeletedObjectIterator, HDRestorableIterator>

 {
    NSArray *_queryDescriptors;
    BOOL _includeDeletedObjects;
    NSArray *_sortDescriptors;
    NSInteger _bufferSize;
    HDProfile *_profile;
    HKSortedQueryAnchor *_anchor;
    NSMutableArray *_iterators;
    HDSortedSampleIterator *_nextIterator;
    BOOL _isInitialized;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HKDeletedObject *deletedObject;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger objectID;
@property (readonly, nonatomic) HKSample *sample;
@property (readonly) Class superclass;


-(BOOL)advanceWithError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)restoreIteratorStateFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithQueryDescriptors:(id)arg0 includeDeletedObjects:(BOOL)arg1 anchor:(id)arg2 sortDescriptors:(id)arg3 bufferSize:(NSInteger)arg4 profile:(id)arg5 ;
-(id)iteratorStateData;
-(id)object;


@end


#endif