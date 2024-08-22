// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEHUBHEADERVIEW_H
#define HUHOMEHUBHEADERVIEW_H

@class UITableViewHeaderFooterView, NSMutableArray, UIImageView, UILabel;



@interface HUHomeHubHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILabel *message; // ivar: _message


-(id)_setupConstraints;
-(id)_setupImageView;
-(id)_setupMessage:(id)arg0 ;
-(id)initWithMessage:(id)arg0 ;


@end


#endif