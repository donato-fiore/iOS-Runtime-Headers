// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSHAREDAUDIOCOLLECTIONVIEWCELL_H
#define CKSHAREDAUDIOCOLLECTIONVIEWCELL_H

@class UIDateLabel;


#import "CKSharedContentsCollectionViewCell.h"
#import "CKAudioProgressView.h"

@interface CKSharedAudioCollectionViewCell : CKSharedContentsCollectionViewCell

@property (retain, nonatomic) CKAudioProgressView *audioPlaybackView; // ivar: _audioPlaybackView
@property (retain, nonatomic) UIDateLabel *previewTitleLabel;


+(id)reuseIdentifier;
-(id)formattedCreatedDateTextFromDate:(id)arg0 ;
-(id)formattedDurationTextForAsset:(id)arg0 ;
-(void)configureWithAttachmentItem:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif