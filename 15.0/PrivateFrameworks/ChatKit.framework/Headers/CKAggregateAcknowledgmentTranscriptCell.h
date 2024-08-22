// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAGGREGATEACKNOWLEDGMENTTRANSCRIPTCELL_H
#define CKAGGREGATEACKNOWLEDGMENTTRANSCRIPTCELL_H



#import "CKAssociatedMessageTranscriptCell.h"
#import "CKAcknowledgmentBalloonView.h"

@interface CKAggregateAcknowledgmentTranscriptCell : CKAssociatedMessageTranscriptCell

@property (retain, nonatomic) CKAcknowledgmentBalloonView *balloonView;
@property (nonatomic) BOOL parentMessageIsFromMe; // ivar: _parentMessageIsFromMe


-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)performInsertion:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif