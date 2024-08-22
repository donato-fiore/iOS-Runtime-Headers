// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTREPLYCOUNTCELL_H
#define CKTRANSCRIPTREPLYCOUNTCELL_H



#import "CKTranscriptStatusCell.h"

@interface CKTranscriptReplyCountCell : CKTranscriptStatusCell

@property (nonatomic) CGFloat countAlpha; // ivar: _countAlpha


-(BOOL)hidesCheckmark;
-(BOOL)shouldHideDuringDarkFSM;
-(BOOL)wantsDrawerLayout;
-(id)animationWithKeyPath:(id)arg0 beginTime:(CGFloat)arg1 duration:(CGFloat)arg2 fromValue:(id)arg3 toValue:(id)arg4 ;
-(void)_fadeInLabelAtStartTime:(CGFloat)arg0 completion:(id)arg1 ;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)performInsertion:(id)arg0 ;
// -(void)performReload:(id)arg0 completion:(unk)arg1  ;
-(void)performRemoval:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif