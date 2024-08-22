// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PREFERENCESVALUECELL_H
#define PREFERENCESVALUECELL_H

@protocol EKCellShortener;


#import "EKUITableViewCell.h"

@interface PreferencesValueCell : EKUITableViewCell

@property (weak, nonatomic) NSObject<EKCellShortener> *shortener; // ivar: _shortener


-(void)_checkValueWidth;
-(void)layoutSubviews;


@end


#endif