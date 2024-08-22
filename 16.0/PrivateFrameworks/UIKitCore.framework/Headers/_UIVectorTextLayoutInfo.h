// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVECTORTEXTLAYOUTINFO_H
#define _UIVECTORTEXTLAYOUTINFO_H


#import <Foundation/Foundation.h>

#import "_UIVectorTextLayoutParameters.h"

@interface _UIVectorTextLayoutInfo : NSObject

@property (nonatomic) CGAffineTransform coordinateAdjustment; // ivar: _coordinateAdjustment
@property (nonatomic) *__CTFrame frame; // ivar: _frame
@property (retain, nonatomic) _UIVectorTextLayoutParameters *parameters; // ivar: _parameters


-(CGFloat)scale;
-(void)dealloc;


@end


#endif