// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSCMSMUTABLEATTRIBUTEARRAY_H
#define MSCMSMUTABLEATTRIBUTEARRAY_H

@class NSMutableArray;



@interface MSCMSMutableAttributeArray : NSMutableArray

@property (retain) NSMutableArray *attributes; // ivar: _attributes
@property *Attribute encodedAttributes; // ivar: _encodedAttributes
@property (retain) NSMutableArray *genericAttributes; // ivar: _genericAttributes


-(NSUInteger)count;
-(id)calculateAttributesWithDigest:(id)arg0 error:(*id)arg1 ;
-(id)getAttributesWithType:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(struct Attribute *)encodeAttributesWithError:(*id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)dealloc;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeAttributes:(id)arg0 ;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)reset;


@end


#endif