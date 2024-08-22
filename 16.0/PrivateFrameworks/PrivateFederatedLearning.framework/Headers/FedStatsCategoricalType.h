// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FEDSTATSCATEGORICALTYPE_H
#define FEDSTATSCATEGORICALTYPE_H

@class NSArray;


#import "FedStatsBoundedULongType.h"

@interface FedStatsCategoricalType : FedStatsBoundedULongType

@property (retain, nonatomic) NSArray *categories; // ivar: _categories


+(id)createFromDict:(id)arg0 possibleError:(*id)arg1 ;
-(NSInteger)dataType;
-(id)decodeFromIndex:(id)arg0 possibleError:(*id)arg1 ;
-(id)encodeToIndex:(id)arg0 possibleError:(*id)arg1 ;
-(id)initWithCategories:(id)arg0 ;
-(id)kOutOfCategories;
-(id)sampleForIndex:(NSUInteger)arg0 ;


@end


#endif