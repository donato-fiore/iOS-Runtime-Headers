// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMBUIMEDIATABLECELL_H
#define NMBUIMEDIATABLECELL_H

@class PSSwitchTableCell, UIButton;


#import "NMBUIDownloadProgressView.h"

@interface NMBUIMediaTableCell : PSSwitchTableCell {
    UIButton *_errorButton;
}


@property (retain, nonatomic) NMBUIDownloadProgressView *downloadProgressView; // ivar: _downloadProgressView


+(id)_configurationFromSpecifier:(id)arg0 ;
+(struct CGSize )artworkSize;
-(BOOL)_shouldDisplayDownloadProgressViewForDownloadState:(id)arg0 ;
-(id)_errorButtonWithSpecifier:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleDownloadIndicatorTapGesture:(id)arg0 ;
-(void)_setDownloadState:(id)arg0 ;
-(void)prepareForReuse;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif