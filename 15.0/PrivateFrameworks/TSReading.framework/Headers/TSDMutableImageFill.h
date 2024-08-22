// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMUTABLEIMAGEFILL_H
#define TSDMUTABLEIMAGEFILL_H

@class TSUColor;


#import "TSDImageFill.h"
#import "TSPData.h"

@interface TSDMutableImageFill : TSDImageFill

@property (nonatomic) CGSize fillSize;
@property (retain, nonatomic) TSPData *imageData;
@property (nonatomic) BOOL interpretsUntaggedImageDataAsGeneric;
@property (nonatomic) int technique;
@property (copy, nonatomic) TSUColor *tintColor;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setScale:(CGFloat)arg0 ;


@end


#endif