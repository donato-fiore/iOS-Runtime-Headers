// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYINVITATIONCONTENTVIEW_H
#define PXSHAREDLIBRARYINVITATIONCONTENTVIEW_H

@class UIView, UIImageView, UILabel;
@protocol PXSharedLibraryParticipant;



@interface PXSharedLibraryInvitationContentView : UIView {
    UIImageView *_badgeView;
}


@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSObject<PXSharedLibraryParticipant> *owner; // ivar: _owner
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateImageViewWithImage:(id)arg0 owner:(id)arg1 ;
-(void)_updateTextLabel;
-(void)_updateTitleLabel;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif