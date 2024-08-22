// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDOWNLOADSBARBUTTONITEM_H
#define SFDOWNLOADSBARBUTTONITEM_H

@class UIBarButtonItem;


#import "SFDownloadsBarButtonItemView.h"

@interface SFDownloadsBarButtonItem : UIBarButtonItem {
    SFDownloadsBarButtonItemView *_buttonView;
}


@property (nonatomic) CGFloat progress; // ivar: _progress


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)pulse;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif