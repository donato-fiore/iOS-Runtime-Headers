// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDISTINCTBYKEYPATHSITERATOR_H
#define HDDISTINCTBYKEYPATHSITERATOR_H

@class NSArray, NSMutableSet, NSString, HKDeletedObject, HKSample;
@protocol HDSampleIterator, HDDeletedObjectIterator, HDRestorableIterator, HDSampleIterator><HDDeletedObjectIterator><HDRestorableIterator;

#import <Foundation/Foundation.h>


@interface HDDistinctByKeyPathsIterator : NSObject <HDSampleIterator, HDDeletedObjectIterator, HDRestorableIterator>

 {
    id<HDSampleIterator><HDDeletedObjectIterator><HDRestorableIterator> *_sourceIterator;
    NSArray *_keyPaths;
    NSMutableSet *_seenValues;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HKDeletedObject *deletedObject;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger objectID;
@property (readonly, nonatomic) HKSample *sample;
@property (readonly) Class superclass;


-(BOOL)advanceWithError:(*id)arg0 ;
-(BOOL)restoreIteratorStateFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSourceIterator:(id)arg0 keyPaths:(id)arg1 ;
-(id)iteratorStateData;
-(id)object;


@end


#endif