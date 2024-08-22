// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HLPHELPTABLEOFCONTENTCELL_H
#define HLPHELPTABLEOFCONTENTCELL_H

@class UITableViewCell, NSLayoutConstraint, UIImageView, UILabel;


#import "HLPHelpItem.h"
#import "HLPURLSessionItem.h"

@interface HLPHelpTableOfContentCell : UITableViewCell {
    NSLayoutConstraint *_arrowImageViewLeadingConstraint;
    NSLayoutConstraint *_sectionImageWidthConstraint;
    NSLayoutConstraint *_sectionImageLeadingConstraint;
    NSLayoutConstraint *_labelToArrowViewLeadingConstraint;
}


@property (nonatomic) BOOL RTL; // ivar: _RTL
@property (retain, nonatomic) UIImageView *arrowImageView; // ivar: _arrowImageView
@property (nonatomic) BOOL closed; // ivar: _closed
@property (retain, nonatomic) HLPHelpItem *helpItem; // ivar: _helpItem
@property (nonatomic) BOOL ignoreLevels; // ivar: _ignoreLevels
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) HLPURLSessionItem *sectionImageURLSessionItem; // ivar: _sectionImageURLSessionItem
@property (retain, nonatomic) UIImageView *sectionImageView; // ivar: _sectionImageView
@property (nonatomic) BOOL showFirstLevelIcon; // ivar: _showFirstLevelIcon
@property (nonatomic) BOOL updateSeparatorInsetAutomatically; // ivar: _updateSeparatorInsetAutomatically


-(NSInteger)itemLevel;
-(id)accessibilityLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGAffineTransform )arrowTransform;
-(void)cancelIconRequest;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)toggle;
-(void)updateConstraints;
-(void)updateToggleImageAnimated:(BOOL)arg0 ;


@end


#endif