// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSCMSMUTABLEATTRIBUTEARRAY_H
#define MSCMSMUTABLEATTRIBUTEARRAY_H

@class NSMutableArray, NSData;



@interface MSCMSMutableAttributeArray : NSMutableArray

@property (retain) NSMutableArray *attributes; // ivar: _attributes
@property (retain) NSData *encodedAttributeSet; // ivar: _encodedAttributeSet
@property (retain) NSMutableArray *genericAttributes; // ivar: _genericAttributes


+(id)createAttributeArrayFromAttributeSetRaw:(struct heim_base_data *)arg0 error:(*id)arg1 ;
-(NSUInteger)count;
-(id)calculateAttributesWithDigest:(id)arg0 error:(*id)arg1 ;
-(id)encodeAttributesWithError:(*id)arg0 ;
-(id)encodeImplicitAttributesWithError:(*id)arg0 ;
-(id)getAttributesWithType:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeAttributes:(id)arg0 ;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)reset;


@end


#endif