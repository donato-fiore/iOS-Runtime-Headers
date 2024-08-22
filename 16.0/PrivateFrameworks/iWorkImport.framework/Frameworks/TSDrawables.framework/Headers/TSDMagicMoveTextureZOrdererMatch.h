// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMAGICMOVETEXTUREZORDERERMATCH_H
#define TSDMAGICMOVETEXTUREZORDERERMATCH_H


#import <Foundation/Foundation.h>

#import "TSDMagicMoveAnimationMatch.h"
#import "TSDTextureSet.h"

@interface TSDMagicMoveTextureZOrdererMatch : NSObject

@property (readonly, nonatomic) TSDMagicMoveAnimationMatch *animationMatch; // ivar: _animationMatch
@property (readonly, nonatomic) TSDTextureSet *incomingTexture; // ivar: _incomingTexture
@property (nonatomic) NSInteger incomingZIndex; // ivar: _incomingZIndex
@property (readonly, nonatomic) BOOL isIncomingZIndexUnmatched; // ivar: _isIncomingZIndexUnmatched
@property (readonly, nonatomic) BOOL isOutgoingZIndexUnmatched; // ivar: _isOutgoingZIndexUnmatched
@property (readonly, nonatomic) TSDTextureSet *outgoingTexture; // ivar: _outgoingTexture
@property (nonatomic) NSInteger outgoingZIndex; // ivar: _outgoingZIndex


-(BOOL)intersectsZOrdererMatch:(id)arg0 ;
-(BOOL)intersectsZOrdererMatch:(id)arg0 withAttemptedZIndex:(NSInteger)arg1 ;
-(CGFloat)interpolatedZIndexAtPercent:(CGFloat)arg0 ;
-(CGFloat)intersectionPercentWithZOrdererMatch:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAnimationMatch:(id)arg0 ;


@end


#endif