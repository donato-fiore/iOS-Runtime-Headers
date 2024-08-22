// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETTAPMESSAGE_H
#define ETTAPMESSAGE_H

@class SKScene, SKFieldNode, NSMutableArray, NSTimer;


#import "ETMessage.h"

@interface ETTapMessage : ETMessage {
    SKScene *_preVisualizeScene;
    SKFieldNode *_noiseField;
    vector<CGPoint, std::allocator<CGPoint>> _points;
    vector<double, std::allocator<double>> _times;
    NSMutableArray *_colors;
    CGFloat _baseTime;
    NSTimer *_soundTimer;
    NSUInteger _soundIndex;
    os_unfair_lock_s _noiseFieldLock;
}


@property (readonly, nonatomic) NSUInteger tapCount;


+(unsigned short)messageType;
-(BOOL)reachedSizeLimit;
-(CGFloat)messageDuration;
-(CGFloat)timeDeltaAtIndex:(NSUInteger)arg0 ;
-(id)_animateCircleInner0:(CGFloat)arg0 inner1:(CGFloat)arg1 outer0:(CGFloat)arg2 outer1:(CGFloat)arg3 duration:(CGFloat)arg4 ;
-(id)archiveData;
-(id)init;
-(id)initWithArchiveData:(id)arg0 ;
-(id)messageTypeAsString;
-(struct CGPoint )pointAtIndex:(NSUInteger)arg0 ;
-(void)_displayInScene:(id)arg0 point:(struct CGPoint )arg1 color:(id)arg2 filled:(BOOL)arg3 withWisp:(BOOL)arg4 ;
-(void)addTapAtPoint:(struct CGPoint )arg0 time:(CGFloat)arg1 color:(id)arg2 ;
-(void)displayInScene:(id)arg0 ;
-(void)preVisualizeInScene:(id)arg0 ;


@end


#endif