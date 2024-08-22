// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSTORAGELOADINGCELL_H
#define CKSTORAGELOADINGCELL_H

@class UITableViewCell, UIActivityIndicatorView;



@interface CKStorageLoadingCell : UITableViewCell

@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner


+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif