// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUBANNERCELL_H
#define SUBANNERCELL_H

@class UIButton, NSString;
@protocol SUCellConfigurationView;


#import "SUTableCell.h"

@interface SUBannerCell : SUTableCell <SUCellConfigurationView>

 {
    UIButton *_leftButton;
    UIButton *_rightButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_newButton;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_reloadButtons;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reloadView;
-(void)setConfiguration:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif