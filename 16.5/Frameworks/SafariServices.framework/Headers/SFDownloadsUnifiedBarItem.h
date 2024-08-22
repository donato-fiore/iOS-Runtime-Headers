// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFDOWNLOADSUNIFIEDBARITEM_H
#define SFDOWNLOADSUNIFIEDBARITEM_H

@class SFUnifiedBarItem;


#import "SFDownloadsUnifiedBarItemView.h"

@interface SFDownloadsUnifiedBarItem : SFUnifiedBarItem {
    SFDownloadsUnifiedBarItemView *_view;
}


@property (nonatomic) CGFloat progress;


-(id)initWithAction:(id)arg0 ;
-(id)view;
-(void)pulse;


@end


#endif