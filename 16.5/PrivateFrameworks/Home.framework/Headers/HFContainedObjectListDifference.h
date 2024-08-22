// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCONTAINEDOBJECTLISTDIFFERENCE_H
#define HFCONTAINEDOBJECTLISTDIFFERENCE_H

@class NSArray, NSNumber;


#import "HFDifference.h"

@interface HFContainedObjectListDifference : HFDifference

@property (retain, nonatomic) NSArray *containedObjectResults; // ivar: _containedObjectResults
@property (readonly, nonatomic) BOOL isASubsetOfB;
@property (retain, nonatomic) NSNumber *isASubsetOfBValue; // ivar: _isASubsetOfBValue
@property (readonly, nonatomic) BOOL isBSubsetOfA;
@property (retain, nonatomic) NSNumber *isBSubsetOfAValue; // ivar: _isBSubsetOfAValue


+(id)containedObjectDifferenceWithKey:(id)arg0 objectsA:(id)arg1 objectsB:(id)arg2 ;
+(id)containedObjectDifferenceWithKey:(id)arg0 objectsA:(id)arg1 objectsB:(id)arg2 block:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilder;
-(id)reevaluateWithBlock:(id)arg0 ;


@end


#endif