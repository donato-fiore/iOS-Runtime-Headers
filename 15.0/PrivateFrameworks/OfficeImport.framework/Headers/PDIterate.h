// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDITERATE_H
#define PDITERATE_H


#import <Foundation/Foundation.h>


@interface PDIterate : NSObject {
    int mType;
    BOOL mIsBackwards;
    BOOL mIsPercentage;
    CGFloat mValue;
}




-(BOOL)isBackwards;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValuePercentage;
-(CGFloat)value;
-(NSUInteger)hash;
-(int)type;
-(void)setIsBackwards:(BOOL)arg0 ;
-(void)setIsValuePercentage:(BOOL)arg0 ;
-(void)setType:(int)arg0 ;
-(void)setValue:(CGFloat)arg0 ;


@end


#endif