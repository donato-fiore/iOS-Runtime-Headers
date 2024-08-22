// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMORELISTCELLLAYOUTMANAGER_H
#define UIMORELISTCELLLAYOUTMANAGER_H



#import "UITableViewCellLayoutManager.h"

@interface UIMoreListCellLayoutManager : UITableViewCellLayoutManager {
    CGFloat _widestImageWidth;
}




-(CGFloat)setWidestImageWidthFromViewControllers:(id)arg0 ;
-(struct CGRect )standardLayoutImageViewFrameForCell:(id)arg0 forSizing:(BOOL)arg1 ;
-(void)layoutSubviewsOfCell:(id)arg0 ;


@end


#endif