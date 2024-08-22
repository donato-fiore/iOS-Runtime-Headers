// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSMULTIPLEWATCHMIGRATIONVIEWCELL_H
#define BPSMULTIPLEWATCHMIGRATIONVIEWCELL_H

@class UITableViewCell, UILabel;


#import "BPSCheckMarkView.h"
#import "BPSRemoveMigrationWatchView.h"

@interface BPSMultipleWatchMigrationViewCell : UITableViewCell

@property (retain, nonatomic) BPSCheckMarkView *checkmarkView; // ivar: _checkmarkView
@property (retain, nonatomic) UILabel *deviceDetailLabel; // ivar: _deviceDetailLabel
@property (retain, nonatomic) BPSRemoveMigrationWatchView *watchView; // ivar: _watchView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif