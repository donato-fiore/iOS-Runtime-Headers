// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMBUIMEDIATABLECELL_H
#define NMBUIMEDIATABLECELL_H

@class PSSwitchTableCell, UIStackView, UIButton;


#import "NMBUIDownloadProgressView.h"

@interface NMBUIMediaTableCell : PSSwitchTableCell {
    UIStackView *_accessoryStackView;
    NMBUIDownloadProgressView *_downloadProgressView;
    UIButton *_errorButton;
}




+(CGFloat)defaultCellHeight;
+(NSInteger)cellStyle;
+(struct CGSize )artworkSize;
-(id)downloadProgressView;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setDownloadState:(NSUInteger)arg0 progress:(CGFloat)arg1 ;
-(void)setDownloadState:(NSUInteger)arg0 progress:(CGFloat)arg1 animated:(BOOL)arg2 ;


@end


#endif