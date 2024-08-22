// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPHOTOSEARCHRESULTCELL_H
#define CKPHOTOSEARCHRESULTCELL_H

@class NSString, UIImageView, UILabel, UIImage;
@protocol CKSearchResultCell;


#import "CKEditableSearchResultCell.h"

@interface CKPhotoSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell>



@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImageView *durationGradientImage; // ivar: _durationGradientImage
@property (retain, nonatomic) UILabel *durationLabel; // ivar: _durationLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL isLivePhoto; // ivar: _isLivePhoto
@property (nonatomic) BOOL isVideo; // ivar: _isVideo
@property (retain, nonatomic) UIImageView *livePhotoImage; // ivar: _livePhotoImage
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: marginInsets
@property (copy, nonatomic) NSString *resultIdentifier; // ivar: _resultIdentifier
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureDurationLabelForResult:(id)arg0 ;
-(void)_livePhotoUpdated:(id)arg0 ;
-(void)_thumbnailGenerated:(id)arg0 ;
-(void)_videoDurationUpdated:(id)arg0 ;
-(void)configureWithQueryResult:(id)arg0 searchText:(id)arg1 mode:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)refreshForSearchTextIfNeeded:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif