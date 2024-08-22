// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKACKNOWLEDGMENTBALLOONVIEW_H
#define CKACKNOWLEDGMENTBALLOONVIEW_H



#import "CKBalloonView.h"
#import "CKAcknowledgmentGlyphView.h"

@interface CKAcknowledgmentBalloonView : CKBalloonView

@property (nonatomic) NSInteger coloredPart; // ivar: _coloredPart
@property (retain, nonatomic) CKAcknowledgmentGlyphView *glyphView; // ivar: _glyphView
@property (nonatomic) NSUInteger stackCount; // ivar: _stackCount


-(void)configureForAggregateAcknowledgmentChatItem:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif