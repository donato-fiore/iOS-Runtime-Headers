// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDOWNLOADSUNIFIEDBARITEMVIEW_H
#define SFDOWNLOADSUNIFIEDBARITEMVIEW_H

@class SFUnifiedBarItemView;


#import "SFDownloadsBarButtonItemView.h"

@interface SFDownloadsUnifiedBarItemView : SFUnifiedBarItemView {
    SFDownloadsBarButtonItemView *_buttonView;
}


@property (nonatomic) CGFloat progress;


-(CGFloat)preferredWidth;
-(id)init;
-(void)pulse;


@end


#endif