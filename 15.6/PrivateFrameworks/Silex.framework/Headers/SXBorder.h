// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXBORDER_H
#define SXBORDER_H



#import "SXJSONObject.h"
#import "SXStrokeStyle.h"

@interface SXBorder : SXJSONObject

@property (readonly, nonatomic) SXStrokeStyle *all;
@property (readonly, nonatomic) SXStrokeStyle *bottom;
@property (readonly, nonatomic) SXStrokeStyle *left;
@property (readonly, nonatomic) SXStrokeStyle *right;
@property (readonly, nonatomic) SXStrokeStyle *top;


-(BOOL)isSolid;
-(BOOL)shouldBeDotted;
-(id)defaultStrokeStyle;


@end


#endif