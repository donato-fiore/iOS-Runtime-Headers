// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSCRIPTSPEAKERBALLOONCELL_H
#define CKTRANSCRIPTSPEAKERBALLOONCELL_H



#import "CKTranscriptBalloonCell.h"
#import "CKSpeakerButton.h"

@interface CKTranscriptSpeakerBalloonCell : CKTranscriptBalloonCell

@property (nonatomic) BOOL adjustSpeakerForAcknowledgment; // ivar: _adjustSpeakerForAcknowledgment
@property (nonatomic) BOOL shouldShowText; // ivar: _shouldShowText
@property (retain, nonatomic) CKSpeakerButton *speakerButton; // ivar: _speakerButton
@property (nonatomic, getter=isSpeakerEnabled) BOOL speakerEnabled; // ivar: _speakerEnabled
@property (nonatomic, getter=isSpeakerHidden) BOOL speakerHidden;


-(void)layoutSubviewsForAlignmentContents;
-(void)setOrientation:(char)arg0 ;


@end


#endif