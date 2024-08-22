// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDTABLEFILTER_H
#define EDTABLEFILTER_H


#import <Foundation/Foundation.h>


@interface EDTableFilter : NSObject {
    int mScale;
    int mOperator;
    CGFloat mValue;
    CGFloat mFilterValue;
}




+(id)edTableFilter;
-(CGFloat)filterValue;
-(CGFloat)value;
-(id)description;
-(int)operatorType;
-(int)scale;
-(void)setFilterValue:(CGFloat)arg0 ;
-(void)setOperatorType:(int)arg0 ;
-(void)setScale:(int)arg0 ;
-(void)setValue:(CGFloat)arg0 ;


@end


#endif