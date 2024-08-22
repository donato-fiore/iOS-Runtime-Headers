// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSTORAGETIPCELL_H
#define STSTORAGETIPCELL_H

@class PSTableCell, NSMutableArray, UIImageView, UILabel, UIButton, UIActivityIndicatorView, NSString;


#import "STStorageProgressView.h"

@interface STStorageTipCell : PSTableCell {
    NSMutableArray *_constraints;
    UIImageView *_appIconView;
    UILabel *_titleLabel;
    UIImageView *_checkIconView;
    UIButton *_enableButton;
    UIActivityIndicatorView *_spinner;
    UILabel *_progressLabel;
    STStorageProgressView *_progressView;
    BOOL _isOption;
    float _percent;
    NSString *_hformat;
    NSString *_h2format;
    CGFloat _titleWidth;
    CGFloat _enableWidth;
    CGFloat _progressWidth;
    CGFloat _nativeSpinnerWidth;
    float _prevPercent;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)_activateOption;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)updateConstraints;


@end


#endif