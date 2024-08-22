// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTTAPBACKSUPPLEMENTARYVIEW_H
#define CKTRANSCRIPTTAPBACKSUPPLEMENTARYVIEW_H



#import "CKTranscriptCollectionSupplementaryView.h"
#import "CKAcknowledgmentBalloonView.h"

@interface CKTranscriptTapbackSupplementaryView : CKTranscriptCollectionSupplementaryView

@property (retain, nonatomic) CKAcknowledgmentBalloonView *balloonView; // ivar: _balloonView


+(id)supplementaryViewKindPrefix;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif