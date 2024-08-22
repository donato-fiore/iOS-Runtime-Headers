// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ETSKETCHMESSAGE_H
#define ETSKETCHMESSAGE_H

@class NSMutableArray, NSArray;


#import "ETMessage.h"

@interface ETSketchMessage : ETMessage {
    NSMutableArray *_strokes;
    NSMutableArray *_colorsInMessage;
}


@property (readonly, nonatomic) NSArray *colorsInMessage;
@property (nonatomic) BOOL didDrawPoints; // ivar: _didDrawPoints
@property (nonatomic) BOOL didEndWisping; // ivar: _didEndWisping
@property (nonatomic) BOOL hasMultipleColors; // ivar: _hasMultipleColors
@property (nonatomic) BOOL hideComet; // ivar: _hideComet
@property (readonly, nonatomic) NSUInteger numberOfColors;
@property (readonly, nonatomic) NSArray *strokes;


+(unsigned short)messageType;
-(BOOL)_decodeWithDoodle:(id)arg0 ;
-(CGFloat)messageDuration;
-(id)archiveData;
-(id)init;
-(id)initWithArchiveData:(id)arg0 ;
-(id)messageTypeAsString;
-(void)addSketchPoint:(struct CGPoint )arg0 ;
-(void)addSketchPoint:(struct CGPoint )arg0 atTime:(CGFloat)arg1 ;
-(void)addStrokeWithColor:(id)arg0 ;
-(void)convertToSimulatedPlaybackSpeed;
-(void)didEndWisp;
-(void)didReachRendererLimit;
-(void)setParentMessage:(id)arg0 ;
-(void)willBeginWisp;


@end


#endif