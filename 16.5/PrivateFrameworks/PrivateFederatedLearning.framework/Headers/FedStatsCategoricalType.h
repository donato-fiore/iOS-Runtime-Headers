// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FEDSTATSCATEGORICALTYPE_H
#define FEDSTATSCATEGORICALTYPE_H

@class NSArray, NSDictionary;


#import "FedStatsBoundedULongType.h"

@interface FedStatsCategoricalType : FedStatsBoundedULongType

@property (readonly, copy, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, copy, nonatomic) NSDictionary *categoryMap; // ivar: _categoryMap


+(id)createFromDict:(id)arg0 possibleError:(*id)arg1 ;
-(NSInteger)dataType;
-(id)decodeFromIndex:(id)arg0 possibleError:(*id)arg1 ;
-(id)encodeToIndex:(id)arg0 possibleError:(*id)arg1 ;
-(id)initWithCategories:(id)arg0 categoryMap:(id)arg1 ;
-(id)kOutOfCategories;
-(id)sampleForIndex:(NSUInteger)arg0 ;


@end


#endif