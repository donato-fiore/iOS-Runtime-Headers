// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMESSAGEPARTHIGHLIGHTCHATITEMCELL_H
#define CKMESSAGEPARTHIGHLIGHTCHATITEMCELL_H



#import "CKAssociatedMessageTranscriptCell.h"
#import "CKMessagePartHighlightBalloonView.h"

@interface CKMessagePartHighlightChatItemCell : CKAssociatedMessageTranscriptCell

@property (retain, nonatomic) CKMessagePartHighlightBalloonView *highlightBalloonView;


-(id)accessibilityIdentifier;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)performHide:(id)arg0 ;
-(void)performInsertion:(id)arg0 ;
// -(void)performReload:(id)arg0 completion:(unk)arg1  ;
-(void)performRemoval:(id)arg0 ;
-(void)performReveal:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif