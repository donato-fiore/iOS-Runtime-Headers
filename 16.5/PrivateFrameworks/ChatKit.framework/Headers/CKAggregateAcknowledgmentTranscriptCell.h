// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAGGREGATEACKNOWLEDGMENTTRANSCRIPTCELL_H
#define CKAGGREGATEACKNOWLEDGMENTTRANSCRIPTCELL_H



#import "CKAssociatedMessageTranscriptCell.h"
#import "CKAcknowledgmentBalloonView.h"

@interface CKAggregateAcknowledgmentTranscriptCell : CKAssociatedMessageTranscriptCell

@property (retain, nonatomic) CKAcknowledgmentBalloonView *balloonView;
@property (nonatomic) BOOL parentMessageIsFromMe; // ivar: _parentMessageIsFromMe


-(void)animateVisibility:(BOOL)arg0 completion:(id)arg1 ;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)performHide:(id)arg0 ;
-(void)performInsertion:(id)arg0 ;
-(void)performReveal:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif