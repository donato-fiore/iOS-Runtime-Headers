// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPLUGINMESSAGESTATUSCELL_H
#define CKPLUGINMESSAGESTATUSCELL_H

@class NSString, IMBalloonPluginDataSource, UIImageView, UIView;


#import "CKTranscriptMultilineLabelCell.h"

@interface CKPluginMessageStatusCell : CKTranscriptMultilineLabelCell

@property (copy, nonatomic) NSString *balloonBundleID; // ivar: _balloonBundleID
@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIView *previousPluginSnapshot; // ivar: _previousPluginSnapshot


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBalloonPluginIconImage;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviewsForAlignmentContents;
-(void)performInsertion:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif