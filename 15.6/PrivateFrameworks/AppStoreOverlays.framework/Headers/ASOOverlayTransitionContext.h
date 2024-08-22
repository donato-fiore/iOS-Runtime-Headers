// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASOOVERLAYTRANSITIONCONTEXT_H
#define ASOOVERLAYTRANSITIONCONTEXT_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASOOverlayTransitionContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableArray *animationBlocks; // ivar: _animationBlocks
@property (nonatomic) CGRect endFrame; // ivar: _endFrame
@property (nonatomic) CGRect startFrame; // ivar: _startFrame


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartFrame:(struct CGRect )arg0 endFrame:(struct CGRect )arg1 ;
-(void)addAnimationBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif