// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADGRADIENTFILLSTOP_H
#define OADGRADIENTFILLSTOP_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OADColor.h"

@interface OADGradientFillStop : NSObject <NSCopying>

 {
    OADColor *mColor;
    float mPosition;
}




+(void)addStopWithColor:(id)arg0 position:(float)arg1 toArray:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)usesPlaceholderColor;
-(NSUInteger)hash;
-(float)position;
-(id)color;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithColor:(id)arg0 position:(float)arg1 ;
-(void)setStyleColor:(id)arg0 ;


@end


#endif