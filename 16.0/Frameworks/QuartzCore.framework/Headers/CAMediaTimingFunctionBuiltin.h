// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMEDIATIMINGFUNCTIONBUILTIN_H
#define CAMEDIATIMINGFUNCTIONBUILTIN_H



#import "CAMediaTimingFunction.h"

@interface CAMediaTimingFunctionBuiltin : CAMediaTimingFunction {
    unsigned int _index;
}




+(BOOL)supportsSecureCoding;
-(Class)classForCoder;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_getPoints:(*CGFloat)arg0 ;
-(void)encodeWithCAMLWriter:(id)arg0 ;


@end


#endif