// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKINVISIBLEINKEFFECTCOVERAGETRACKER_H
#define CKINVISIBLEINKEFFECTCOVERAGETRACKER_H

@class NSTimer;
@protocol CKInvisibleInkEffectCoverageTrackerDelegate;

#import <Foundation/Foundation.h>


@interface CKInvisibleInkEffectCoverageTracker : NSObject {
    *CGFloat _expiryTimes;
    NSUInteger _width;
    NSUInteger _height;
    CGFloat _cellWidth;
    CGFloat _cellHeight;
    NSTimer *_recoverTimer;
}


@property (weak, nonatomic) NSObject<CKInvisibleInkEffectCoverageTrackerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) CGFloat touchLifetime; // ivar: _touchLifetime
@property (nonatomic, getter=isUncovered) BOOL uncovered; // ivar: _uncovered


-(id)initWithSize:(struct CGSize )arg0 touchLifetime:(CGFloat)arg1 ;
-(void)_checkForCover:(id)arg0 ;
-(void)dealloc;
-(void)recordTouchAtPoint:(struct CGPoint )arg0 ;
-(void)reset;


@end


#endif