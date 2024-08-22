// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSCRIPTBALLOONCOLLECTIONVIEWCELL_H
#define CKTRANSCRIPTBALLOONCOLLECTIONVIEWCELL_H



#import "CKTranscriptCollectionViewCell.h"
#import "CKBalloonView.h"

@interface CKTranscriptBalloonCollectionViewCell : CKTranscriptCollectionViewCell

@property (nonatomic) NSInteger animationPauseReasons; // ivar: _animationPauseReasons
@property (retain, nonatomic) CKBalloonView *balloonView; // ivar: _balloonView


+(id)reuseIdentifier;
-(id)_balloonViewForChatItem:(id)arg0 ;
-(id)description;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif