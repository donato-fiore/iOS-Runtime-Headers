// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSITEROWCELL_H
#define SFSITEROWCELL_H

@class UICollectionViewCell, UIVisualEffectView, UILabel, NSString;
@protocol WBSStartPageListItemProxy;



@interface SFSiteRowCell : UICollectionViewCell <WBSStartPageListItemProxy>

 {
    UIVisualEffectView *_backgroundEffectView;
    UILabel *_label;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateVibrancy;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif