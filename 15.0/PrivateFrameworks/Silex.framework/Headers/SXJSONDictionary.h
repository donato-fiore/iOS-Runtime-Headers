// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXJSONDICTIONARY_H
#define SXJSONDICTIONARY_H

@class NSDictionary, NSArray, NSMutableDictionary;
@protocol NSFastEnumeration;


#import "SXJSONObject.h"

@interface SXJSONDictionary : SXJSONObject <NSFastEnumeration>



@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) NSDictionary *json; // ivar: _json
@property (readonly, nonatomic) NSArray *keys; // ivar: _keys
@property (readonly, nonatomic) id *objectValueClassBlock; // ivar: _objectValueClassBlock
@property (readonly, nonatomic) NSMutableDictionary *objects; // ivar: _objects
@property (readonly, nonatomic) id *valueClassBlock; // ivar: _valueClassBlock


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)JSONRepresentation;
-(id)NSDictionary;
-(id)allKeys;
-(id)allObjects;
-(id)description;
// -(id)initWithValueClassBlock:(id)arg0 objectValueClassBlock:(unk)arg1 purgeBlock:(id)arg2 andJSONObject:(unk)arg3 andVersion:(id)arg4  ;
-(id)keyAtIndex:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;


@end


#endif