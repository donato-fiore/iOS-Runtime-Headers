// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXLAYOUTRESULT_H
#define SXLAYOUTRESULT_H

@protocol SXDOM;

#import <Foundation/Foundation.h>

#import "SXLayoutBlueprint.h"

@interface SXLayoutResult : NSObject

@property (readonly, nonatomic) NSObject<SXDOM> *DOM; // ivar: _DOM
@property (readonly, nonatomic) SXLayoutBlueprint *blueprint; // ivar: _blueprint
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration


-(id)initWithLayoutBlueprint:(id)arg0 DOM:(id)arg1 duration:(CGFloat)arg2 ;


@end


#endif