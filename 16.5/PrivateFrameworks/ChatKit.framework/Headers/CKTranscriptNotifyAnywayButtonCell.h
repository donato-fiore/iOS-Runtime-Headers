// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTNOTIFYANYWAYBUTTONCELL_H
#define CKTRANSCRIPTNOTIFYANYWAYBUTTONCELL_H

@class NSString, UIButton, NSAttributedString;
@protocol CKTranscriptCollectionViewCellProtocol;


#import "CKTranscriptCell.h"

@interface CKTranscriptNotifyAnywayButtonCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIButton *notifyAnywayButton; // ivar: _notifyAnywayButton
@property (copy, nonatomic) NSAttributedString *notifyAnywayButtonAttributedText;
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(BOOL)hidesCheckmark;
-(id)animationWithKeyPath:(id)arg0 beginTime:(CGFloat)arg1 duration:(CGFloat)arg2 fromValue:(id)arg3 toValue:(id)arg4 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_fadeInLabelAtStartTime:(CGFloat)arg0 completion:(id)arg1 ;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)performInsertion:(id)arg0 ;


@end


#endif