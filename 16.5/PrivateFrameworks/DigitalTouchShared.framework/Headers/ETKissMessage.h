// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETKISSMESSAGE_H
#define ETKISSMESSAGE_H

@class SKTexture, SKUniform, NSMutableArray, NSMutableSet;


#import "ETMessage.h"
#import "KissNode.h"

@interface ETKissMessage : ETMessage {
    SKTexture *_atlas;
    SKUniform *_atlasUniform;
    NSMutableArray *_points;
    NSMutableArray *_angles;
    NSMutableArray *_delays;
    NSMutableSet *_kissMarkNodes;
    CGFloat _lastKissTime;
    KissNode *_lastKiss;
    BOOL _didDelegateWillStopPlaying;
    BOOL _didDelegateDidStopPlaying;
}




+(id)_kissColor;
+(unsigned short)messageType;
-(BOOL)_hasKissesThatLeaveMark;
-(BOOL)_leaveMarkAtDelay:(CGFloat)arg0 ;
-(BOOL)reachedSizeLimit;
-(CGFloat)messageDuration;
-(id)archiveData;
-(id)init;
-(id)initWithArchiveData:(id)arg0 ;
-(id)messageTypeAsString;
-(void)_displayKissAtPoint:(struct CGPoint )arg0 angle:(CGFloat)arg1 leavesMark:(BOOL)arg2 inScene:(id)arg3 ;
-(void)_initAtlas;
-(void)_notifyDelegateDidStopPlaying;
-(void)_notifyDelegateWillStopPlaying;
-(void)_setKissLeavesMark:(id)arg0 ;
-(void)addKissAtNormalizedPoint:(struct CGPoint )arg0 angle:(CGFloat)arg1 time:(CGFloat)arg2 toScene:(id)arg3 ;
-(void)displayInScene:(id)arg0 ;
-(void)setParentMessage:(id)arg0 ;
-(void)stopPlaying;


@end


#endif