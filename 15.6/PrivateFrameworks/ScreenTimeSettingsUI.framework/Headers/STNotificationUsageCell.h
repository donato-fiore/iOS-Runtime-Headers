// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STNOTIFICATIONUSAGECELL_H
#define STNOTIFICATIONUSAGECELL_H

@class UIImageView;


#import "STUsageCell.h"

@interface STNotificationUsageCell : STUsageCell

@property (readonly, nonatomic) UIImageView *notificationDot; // ivar: _notificationDot


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)setValue:(id)arg0 ;


@end


#endif