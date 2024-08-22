// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEGMENTEDCONTROLAPPEARANCESTORAGE_H
#define _UISEGMENTEDCONTROLAPPEARANCESTORAGE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _UISegmentedControlAppearanceStorage : NSObject {
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_miniBackgroundImages;
    NSMutableDictionary *_dividerImages;
    NSMutableDictionary *_miniDividerImages;
    NSMutableDictionary *_textAttributesForState;
    NSMutableDictionary *_backgroundPositionAdjustmentsForBarMetrics;
    NSMutableDictionary *_contentPositionOffsets;
    NSMutableDictionary *_miniContentPositionOffsets;
    BOOL _legacyDontHighlight;
    BOOL _legacySuppressOptionsBackground;
    BOOL _isTiled;
    NSUInteger _leftCapWidth;
    NSUInteger _rightCapWidth;
}




-(BOOL)legacySuppressOptionsBackground;
-(BOOL)wantsTrackingSuppressed;
-(CGFloat)backgroundPositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(id)anyDividerImage;
-(id)anyDividerImageForMini:(BOOL)arg0 ;
-(id)backgroundImageForState:(NSUInteger)arg0 isMini:(BOOL)arg1 ;
-(id)backgroundImageForState:(NSUInteger)arg0 isMini:(BOOL)arg1 withFallback:(BOOL)arg2 ;
-(id)contentPositionOffsetForSegment:(NSInteger)arg0 inMiniBar:(BOOL)arg1 ;
-(id)contentPositionOffsetForSegment:(NSInteger)arg0 inMiniBar:(BOOL)arg1 noFallback:(BOOL)arg2 ;
-(id)dividerImageForLeftSegmentState:(NSUInteger)arg0 rightSegmentState:(NSUInteger)arg1 isMini:(BOOL)arg2 ;
-(id)dividerImageForLeftSegmentState:(NSUInteger)arg0 rightSegmentState:(NSUInteger)arg1 isMini:(BOOL)arg2 withFallback:(BOOL)arg3 ;
-(id)init;
-(id)textAttributesForState:(NSUInteger)arg0 ;
-(void)setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 isMini:(BOOL)arg2 ;
-(void)setBackgroundPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)setContentPositionOffset:(id)arg0 forSegment:(NSInteger)arg1 inMiniBar:(BOOL)arg2 ;
-(void)setDetail:(struct ? *)arg0 ;
-(void)setDividerImage:(id)arg0 forLeftSegmentState:(NSUInteger)arg1 rightSegmentState:(NSUInteger)arg2 isMini:(BOOL)arg3 ;
-(void)setIsTiled:(BOOL)arg0 leftCapWidth:(NSUInteger)arg1 rightCapWidth:(NSUInteger)arg2 ;
-(void)setTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)takeTextAttributesFrom:(struct ? )arg0 forState:(NSUInteger)arg1 ;


@end


#endif