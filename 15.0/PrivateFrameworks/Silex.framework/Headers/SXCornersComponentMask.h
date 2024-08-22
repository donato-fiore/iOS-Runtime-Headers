// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCORNERSCOMPONENTMASK_H
#define SXCORNERSCOMPONENTMASK_H

@class NSString;


#import "SXComponentMask.h"

@interface SXCornersComponentMask : SXComponentMask

@property (readonly, nonatomic) BOOL bottomLeft;
@property (readonly, nonatomic) BOOL bottomRight;
@property (readonly, nonatomic) NSUInteger cornerMask;
@property (readonly, nonatomic) NSString *curve;
@property (readonly, nonatomic) _SXConvertibleValue radius;
@property (readonly, nonatomic) BOOL topLeft;
@property (readonly, nonatomic) BOOL topRight;


-(BOOL)bottomLeftWithValue:(id)arg0 withType:(int)arg1 ;
-(BOOL)bottomRightWithValue:(id)arg0 withType:(int)arg1 ;
-(BOOL)cornerWithValue:(id)arg0 withType:(int)arg1 ;
-(BOOL)topLeftWithValue:(id)arg0 withType:(int)arg1 ;
-(BOOL)topRightWithValue:(id)arg0 withType:(int)arg1 ;
-(id)curveWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif