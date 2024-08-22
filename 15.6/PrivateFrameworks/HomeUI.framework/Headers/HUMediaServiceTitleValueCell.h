// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMEDIASERVICETITLEVALUECELL_H
#define HUMEDIASERVICETITLEVALUECELL_H

@class NSArray, UIImageView;


#import "HUTitleValueCell.h"

@interface HUMediaServiceTitleValueCell : HUTitleValueCell

@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property BOOL iconImageLoadingInProgress; // ivar: _iconImageLoadingInProgress
@property (retain, nonatomic) UIImageView *serviceIconView; // ivar: _serviceIconView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_loadServiceIconImage;
-(void)_updateContentMetrics;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif