// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMBUIDISCLOSUREMEDIATABLECELL_H
#define NMBUIDISCLOSUREMEDIATABLECELL_H

@class PSTableCell;


#import "NMBUIDownloadProgressView.h"

@interface NMBUIDisclosureMediaTableCell : PSTableCell

@property (retain, nonatomic) NMBUIDownloadProgressView *downloadProgressView; // ivar: _downloadProgressView


-(BOOL)_shouldDisplayDownloadProgressViewForDownloadState:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleDownloadIndicatorTapGesture:(id)arg0 ;
-(void)_setDownloadState:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif