// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXAUTOPLACEMENTMARGIN_H
#define SXAUTOPLACEMENTMARGIN_H

@class NSString;
@protocol SXEdgeSpacing;

#import <Foundation/Foundation.h>


@interface SXAutoPlacementMargin : NSObject <SXEdgeSpacing>



@property (readonly, nonatomic) _SXConvertibleValue bottom; // ivar: _bottom
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _SXConvertibleValue left; // ivar: _left
@property (readonly, nonatomic) _SXConvertibleValue right; // ivar: _right
@property (readonly) Class superclass;
@property (readonly, nonatomic) _SXConvertibleValue top; // ivar: _top


-(id)initWithTop:(struct _SXConvertibleValue )arg0 bottom:(struct _SXConvertibleValue )arg1 ;


@end


#endif