// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHDERRORBAR_H
#define CHDERRORBAR_H


#import <Foundation/Foundation.h>

#import "CHDChart.h"
#import "CHDData.h"
#import "OADGraphicProperties.h"

@interface CHDErrorBar : NSObject {
    CHDChart *mChart;
    CGFloat mValue;
    int mType;
    int mValueType;
    int mDirection;
    BOOL mNoEndCap;
    CHDData *mMinusValues;
    CHDData *mPlusValues;
    OADGraphicProperties *mGraphicProperties;
}




+(id)errorBarWithChart:(id)arg0 ;
-(BOOL)isNoEndCap;
-(CGFloat)value;
-(id)description;
-(id)graphicProperties;
-(id)initWithChart:(id)arg0 ;
-(id)minusValues;
-(id)plusValues;
-(int)direction;
-(int)type;
-(int)valueType;
-(void)setDirection:(int)arg0 ;
-(void)setGraphicProperties:(id)arg0 ;
-(void)setMinusValues:(id)arg0 ;
-(void)setNoEndCap:(BOOL)arg0 ;
-(void)setPlusValues:(id)arg0 ;
-(void)setType:(int)arg0 ;
-(void)setValue:(CGFloat)arg0 ;
-(void)setValueType:(int)arg0 ;


@end


#endif