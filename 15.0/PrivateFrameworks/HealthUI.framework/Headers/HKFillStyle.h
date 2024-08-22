// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFILLSTYLE_H
#define HKFILLSTYLE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HKFillStyle : NSObject <NSCopying>





-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)clearCache;
-(void)renderPath:(struct CGPath *)arg0 context:(struct CGContext *)arg1 axisRect:(struct CGRect )arg2 alpha:(CGFloat)arg3 ;


@end


#endif