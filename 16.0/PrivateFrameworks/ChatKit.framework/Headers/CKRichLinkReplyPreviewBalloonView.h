// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKRICHLINKREPLYPREVIEWBALLOONVIEW_H
#define CKRICHLINKREPLYPREVIEWBALLOONVIEW_H

@class IMBalloonPluginDataSource, LPLinkMetadata, LPLinkView;


#import "CKColoredBalloonView.h"

@interface CKRichLinkReplyPreviewBalloonView : CKColoredBalloonView

@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) LPLinkMetadata *linkMetadata; // ivar: _linkMetadata
@property (retain, nonatomic) LPLinkView *linkView; // ivar: _linkView


-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)configureForTranscriptPlugin:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;


@end


#endif