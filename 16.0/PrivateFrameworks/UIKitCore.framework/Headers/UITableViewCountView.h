// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITABLEVIEWCOUNTVIEW_H
#define UITABLEVIEWCOUNTVIEW_H

@class NSString;


#import "UILabel.h"

@interface UITableViewCountView : UILabel {
    NSString *_countString;
    int _count;
}




-(NSInteger)count;
-(id)initWithFrame:(struct CGRect )arg0 withCountString:(id)arg1 withCount:(NSInteger)arg2 ;
-(void)setCount:(NSInteger)arg0 ;
-(void)setCountString:(id)arg0 withCount:(NSInteger)arg1 ;


@end


#endif