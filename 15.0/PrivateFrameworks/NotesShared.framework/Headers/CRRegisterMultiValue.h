// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRREGISTERMULTIVALUE_H
#define CRREGISTERMULTIVALUE_H

@class NSSet;


#import "CRRegister.h"
#import "CRSet.h"

@interface CRRegisterMultiValue : CRRegister

@property (retain, nonatomic) NSSet *cachedValues; // ivar: _cachedValues
@property (retain, nonatomic) CRSet *values; // ivar: _values


-(BOOL)isEqual:(id)arg0 ;
-(id)allContents;
-(id)contents;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)description;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithContents:(id)arg0 document:(id)arg1 ;
-(id)initWithValues:(id)arg0 ;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)mergeWith:(id)arg0 ;
-(void)mergeWithRegisterMultiValue:(id)arg0 ;
-(void)setContents:(id)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif