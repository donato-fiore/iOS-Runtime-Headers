// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEWSCOMPLETIONHEADERVIEW_H
#define NEWSCOMPLETIONHEADERVIEW_H

@class UITableViewHeaderFooterView, UIImageView, UILabel;



@interface NewsCompletionHeaderView : UITableViewHeaderFooterView {
    UIImageView *_newsImage;
    UILabel *_newsLabel;
}




-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)layoutSubviews;
-(void)setHeaderText:(id)arg0 ;


@end


#endif