// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISEGMENTATIONGATINGRANGE_H
#define PISEGMENTATIONGATINGRANGE_H


#import <Foundation/Foundation.h>


@interface PISegmentationGatingRange : NSObject

@property (readonly, nonatomic) CGFloat depthMax; // ivar: _depthMax
@property (readonly, nonatomic) CGFloat depthMin; // ivar: _depthMin
@property (readonly, nonatomic) CGFloat manualMax; // ivar: _manualMax
@property (readonly, nonatomic) CGFloat manualMin; // ivar: _manualMin
@property (readonly, nonatomic) CGFloat max; // ivar: _max
@property (readonly, nonatomic) CGFloat min; // ivar: _min


-(id)description;
-(id)initWithMin:(CGFloat)arg0 max:(CGFloat)arg1 manualMin:(CGFloat)arg2 manualMax:(CGFloat)arg3 depthMin:(CGFloat)arg4 depthMax:(CGFloat)arg5 ;
-(id)withLenience:(CGFloat)arg0 ;


@end


#endif