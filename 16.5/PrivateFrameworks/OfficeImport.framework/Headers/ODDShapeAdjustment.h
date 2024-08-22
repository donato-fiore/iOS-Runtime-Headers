// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODDSHAPEADJUSTMENT_H
#define ODDSHAPEADJUSTMENT_H


#import <Foundation/Foundation.h>


@interface ODDShapeAdjustment : NSObject {
    unsigned int mIndex;
    CGFloat mValue;
}




-(CGFloat)value;
-(id)description;
-(unsigned int)index;
-(void)setIndex:(unsigned int)arg0 ;
-(void)setValue:(CGFloat)arg0 ;


@end


#endif