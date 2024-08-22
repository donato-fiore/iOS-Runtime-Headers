// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMUTABLEIMAGEFILL_H
#define TSDMUTABLEIMAGEFILL_H

@class TSPData, TSUColor;
@protocol NSCopying;


#import "TSDImageFill.h"

@interface TSDMutableImageFill : TSDImageFill <NSCopying>



@property (nonatomic) CGSize fillSize;
@property (retain, nonatomic) TSPData *imageData;
@property (nonatomic) CGFloat scale;
@property (nonatomic) NSUInteger technique;
@property (copy, nonatomic) TSUColor *tintColor;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif