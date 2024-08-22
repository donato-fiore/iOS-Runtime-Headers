// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCUSTOMOBJECT_H
#define INCUSTOMOBJECT_H



#import "INObject.h"
#import "INCodable.h"
#import "INCodableDescription.h"

@interface INCustomObject : INObject

@property (retain, nonatomic, setter=_setBackingStore:) INCodable *_backingStore; // ivar: _backingStore
@property (readonly, nonatomic) INCodableDescription *codableDescription;


+(BOOL)supportsSecureCoding;
-(BOOL)_isValidKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithCodableDescription:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 parameterName:(id)arg1 reference:(id)arg2 ;
-(id)initWithObject:(id)arg0 codableDescription:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif