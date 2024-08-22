// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFQUICKLOOKDOCUMENTINFOVIEW_H
#define _SFQUICKLOOKDOCUMENTINFOVIEW_H

@class UIView, UIStackView, UILabel, NSLayoutConstraint, NSString, UIImageView;



@interface _SFQuickLookDocumentInfoView : UIView {
    UIStackView *_stackView;
    UILabel *_fileNameLabel;
    UILabel *_fileSizeLabel;
    UIView *_spacingView;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
    NSLayoutConstraint *_lineHeightBetweenIconAndFileNameLabelConstraint;
}


@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (retain, nonatomic) NSString *fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSString *fileType; // ivar: _fileType
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureOrientationBasedConstraints:(NSInteger)arg0 ;
-(void)_updateDocumentSizeLabel;
-(void)_updatePropertiesDefinedByContentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif