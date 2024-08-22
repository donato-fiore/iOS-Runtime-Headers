// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMCSSPRIMITIVEVALUE_H
#define DOMCSSPRIMITIVEVALUE_H



#import "DOMCSSValue.h"

@interface DOMCSSPrimitiveValue : DOMCSSValue

@property (readonly) unsigned short primitiveType;


-(float)getFloatValue:(unsigned short)arg0 ;
-(id)getCounterValue;
-(id)getRGBColorValue;
-(id)getRectValue;
-(id)getStringValue;
-(void)setFloatValue:(unsigned short)arg0 ;
-(void)setFloatValue:(unsigned short)arg0 floatValue:(float)arg1 ;
-(void)setStringValue:(unsigned short)arg0 ;
-(void)setStringValue:(unsigned short)arg0 stringValue:(id)arg1 ;


@end


#endif