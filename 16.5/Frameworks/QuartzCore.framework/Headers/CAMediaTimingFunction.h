// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMEDIATIMINGFUNCTION_H
#define CAMEDIATIMINGFUNCTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CAMediaTimingFunction : NSObject <NSSecureCoding>

 {
    *CAMediaTimingFunctionPrivate _priv;
}




+(BOOL)supportsSecureCoding;
+(id)functionWithControlPoints:(float)arg0 ;
+(id)functionWithName:(id)arg0 ;
+(void)CAMLParserEndElement:(id)arg0 content:(id)arg1 ;
-(NSUInteger)CA_copyNumericValue:(*CGFloat)arg0 ;
-(NSUInteger)CA_numericValueCount;
-(float)_solveForInput:(float)arg0 ;
-(id)CAMLType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithControlPoints:(float)arg0 ;
-(struct Object *)CA_copyRenderValue;
-(void)_getPoints:(*CGFloat)arg0 ;
-(void)dealloc;
-(void)encodeWithCAMLWriter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getControlPointAtIndex:(NSUInteger)arg0 values:(float)arg1 ;


@end


#endif