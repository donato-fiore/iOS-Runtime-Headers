// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXJSONARRAY_H
#define SXJSONARRAY_H

@class NSArray, NSMutableArray;
@protocol NSFastEnumeration;


#import "SXJSONObject.h"

@interface SXJSONArray : SXJSONObject <NSFastEnumeration>



@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) NSArray *json; // ivar: _json
@property (readonly, nonatomic) id *objectValueClassBlock; // ivar: _objectValueClassBlock
@property (readonly, nonatomic) NSMutableArray *objects; // ivar: _objects
@property (readonly, nonatomic) id *valueClassBlock; // ivar: _valueClassBlock


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)JSONRepresentation;
-(id)NSArray;
-(id)description;
-(id)firstObject;
// -(id)initWithValueClassBlock:(id)arg0 objectValueClassBlock:(unk)arg1 purgeBlock:(id)arg2 andJSONObject:(unk)arg3 andVersion:(id)arg4  ;
-(id)lastObject;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif