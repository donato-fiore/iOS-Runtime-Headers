// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDKNOB_H
#define TSDKNOB_H

@class CALayer, CAShapeLayer;

#import <Foundation/Foundation.h>

#import "TSDBezierPath.h"
#import "TSDRep.h"

@interface TSDKnob : NSObject {
    CALayer *mLayer;
    CAShapeLayer *mHitRegionLayer;
}


@property (copy, nonatomic) TSDBezierPath *hitRegionPath; // ivar: mHitRegionPath
@property (readonly, nonatomic) CALayer *layer;
@property (nonatomic) CGPoint offset; // ivar: mOffset
@property (nonatomic) BOOL offsetValid; // ivar: mOffsetValid
@property (nonatomic) CGPoint position; // ivar: mPosition
@property (nonatomic) CGFloat radius; // ivar: mRadius
@property (readonly, nonatomic) TSDRep *rep; // ivar: mRep
@property (nonatomic) BOOL shouldDisplayDirectlyOverRep; // ivar: mShouldDisplayDirectlyOverRep
@property (nonatomic) NSUInteger tag; // ivar: mTag
@property (nonatomic) int type; // ivar: mType
@property (nonatomic) BOOL worksWhenInVersionBrowsingMode; // ivar: mWorksWhenInVersionBrowsingMode
@property (nonatomic) BOOL worksWhenRepLocked; // ivar: mWorksWhenRepLocked


-(BOOL)isHitByUnscaledPoint:(struct CGPoint )arg0 andRep:(id)arg1 ;
-(BOOL)isHitByUnscaledPoint:(struct CGPoint )arg0 andRep:(id)arg1 returningDistance:(*CGFloat)arg2 ;
-(BOOL)obscuresKnob:(id)arg0 ;
-(BOOL)overlapsWithKnob:(id)arg0 ;
-(CGFloat)i_rotationInDegreesForKnobOnRep:(id)arg0 ;
-(id)description;
-(id)hitRegionLayerForRep:(id)arg0 ;
-(id)init;
-(id)initWithType:(int)arg0 position:(struct CGPoint )arg1 radius:(CGFloat)arg2 tag:(NSUInteger)arg3 onRep:(id)arg4 ;
-(id)knobImage;
-(int)dragType;
-(struct CGRect )boundingBoxOfHitRegionForRep:(id)arg0 scale:(CGFloat)arg1 ;
-(void)dealloc;
-(void)updateHitRegionPathForRep:(id)arg0 ;


@end


#endif