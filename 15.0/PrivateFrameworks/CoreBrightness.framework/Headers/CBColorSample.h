// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBCOLORSAMPLE_H
#define CBCOLORSAMPLE_H


#import <Foundation/Foundation.h>


@interface CBColorSample : NSObject

@property (readonly, nonatomic) CGFloat CCT; // ivar: _CCT
@property (readonly, nonatomic) ? Lab;
@property (readonly, nonatomic) ? XYZ; // ivar: _XYZ
@property (readonly, nonatomic) NSInteger colorBin;
@property (readonly, nonatomic) CGFloat lux; // ivar: _lux
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) ? xy; // ivar: _xy


-(CGFloat)CCTDifferenceWith:(id)arg0 ;
-(CGFloat)LuxDifferenceWith:(id)arg0 ;
-(CGFloat)colorDeltaEWith:(id)arg0 ;
-(id)copyDataInDictionary;
-(id)description;
-(id)init;
-(id)initWithChromaticity:(struct ? )arg0 illuminance:(CGFloat)arg1 andTempterature:(CGFloat)arg2 ;
-(id)initWithHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(id)initWithTristimulus:(struct ? )arg0 illuminance:(CGFloat)arg1 andTempterature:(CGFloat)arg2 ;
-(void)fillInChromaticity;
-(void)fillInTristimulus;


@end


#endif