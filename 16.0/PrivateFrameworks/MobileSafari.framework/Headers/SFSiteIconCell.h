// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSITEICONCELL_H
#define SFSITEICONCELL_H

@class UICollectionViewCell, UIView, UILabel, NSString, UIImage;
@protocol SFSiteIconModel;


#import "_SFSiteIconView.h"

@interface SFSiteIconCell : UICollectionViewCell <SFSiteIconModel>

 {
    UIView *_iconDimmingView;
    _SFSiteIconView *_iconView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}


@property (readonly, nonatomic) UIView *contextMenuPreviewView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(id)reuseIdentifier;
-(id)focusEffect;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setAction:(id)arg0 ;
-(void)configureUsingAction:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateViewsDependingOnCustomTraits;


@end


#endif