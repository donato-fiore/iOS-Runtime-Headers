// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKORGANICTRANSCRIPTBALLOONCELL_H
#define CKORGANICTRANSCRIPTBALLOONCELL_H



#import "CKTranscriptBalloonCell.h"
#import "CKOrganicImageLayoutRecipe.h"

@interface CKOrganicTranscriptBalloonCell : CKTranscriptBalloonCell

@property (retain, nonatomic) CKOrganicImageLayoutRecipe *layoutRecipe; // ivar: _layoutRecipe


-(CGFloat)layoutOffset;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;


@end


#endif