// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FEDSTATSCOMBINATIONTYPE_H
#define FEDSTATSCOMBINATIONTYPE_H

@class NSDictionary, NSArray;


#import "FedStatsBoundedULongType.h"

@interface FedStatsCombinationType : FedStatsBoundedULongType {
    NSUInteger _classCount;
}


@property (retain, nonatomic) NSDictionary *combinationSpec; // ivar: _combinationSpec
@property (retain, nonatomic) NSArray *orderedKeys; // ivar: _orderedKeys
@property (retain, nonatomic, getter=strides) NSDictionary *strides; // ivar: _strides


+(id)createFromDict:(id)arg0 possibleError:(*id)arg1 ;
+(id)kAvailableTypes;
-(NSInteger)dataType;
-(NSUInteger)classCount;
-(id)decodeFromIndex:(id)arg0 possibleError:(*id)arg1 ;
-(id)encodeToIndex:(id)arg0 possibleError:(*id)arg1 ;
-(id)initWithCombinationSpec:(id)arg0 ;
-(id)sampleForIndex:(NSUInteger)arg0 ;
-(id)typesInCombination;


@end


#endif