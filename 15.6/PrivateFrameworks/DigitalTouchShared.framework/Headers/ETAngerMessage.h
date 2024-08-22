// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETANGERMESSAGE_H
#define ETANGERMESSAGE_H

@class SKSpriteNode, NSMutableArray;


#import "ETMessage.h"

@interface ETAngerMessage : ETMessage {
    SKSpriteNode *_anger;
    NSMutableArray *_points;
    NSMutableArray *_delays;
}


@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGPoint normalizedCenter; // ivar: _normalizedCenter


+(unsigned short)messageType;
-(CGFloat)messageDuration;
-(id)archiveData;
-(id)init;
-(id)initWithArchiveData:(id)arg0 ;
-(id)messageTypeAsString;
-(void)_updateCenterFromNormalizedPoint:(struct CGPoint )arg0 inScene:(id)arg1 ;
-(void)displayInScene:(id)arg0 ;
-(void)setNormalizedPoint:(struct CGPoint )arg0 atRelativeTime:(CGFloat)arg1 inScene:(id)arg2 ;
-(void)stopPlaying;


@end


#endif