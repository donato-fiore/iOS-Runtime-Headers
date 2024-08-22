// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACTIVITYTABLECELL_H
#define PKACTIVITYTABLECELL_H

@class UIActivityIndicatorView;


#import "PKTableViewCell.h"

@interface PKActivityTableCell : PKTableViewCell

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(void)layoutSubviews;


@end


#endif