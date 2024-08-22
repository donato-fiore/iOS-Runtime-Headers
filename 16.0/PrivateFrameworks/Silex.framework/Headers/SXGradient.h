// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXGRADIENT_H
#define SXGRADIENT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SXGradient : NSObject

@property (readonly, nonatomic) NSArray *colors; // ivar: _colors
@property (readonly, nonatomic) CGPoint endPoint; // ivar: _endPoint
@property (readonly, nonatomic) NSArray *locations; // ivar: _locations
@property (readonly, nonatomic) CGPoint startPoint; // ivar: _startPoint


-(id)initWithStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 colors:(id)arg2 locations:(id)arg3 ;


@end


#endif