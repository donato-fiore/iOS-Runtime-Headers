// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIDOWNLOADSTABLEVIEWCELL_H
#define SKUIDOWNLOADSTABLEVIEWCELL_H

@class UITableViewCell;


#import "SKUIDownloadsCellView.h"

@interface SKUIDownloadsTableViewCell : UITableViewCell

@property (readonly, nonatomic) SKUIDownloadsCellView *cellView; // ivar: _cellView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif