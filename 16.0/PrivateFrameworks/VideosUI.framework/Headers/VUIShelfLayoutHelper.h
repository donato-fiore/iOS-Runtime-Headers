// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUISHELFLAYOUTHELPER_H
#define VUISHELFLAYOUTHELPER_H


#import <Foundation/Foundation.h>

#import "VUIShelfViewLayout.h"

@interface VUIShelfLayoutHelper : NSObject {
    NSInteger _sectionCount;
    *NSInteger _sectionOffsets;
    *CGRect _cellFrames;
    *CGRect _headerFrames;
    *UIEdgeInsets _sectionInsets;
}


@property (readonly, nonatomic) NSInteger actualRowCount; // ivar: _actualRowCount
@property (readonly, weak, nonatomic) VUIShelfViewLayout *shelfViewLayout; // ivar: _shelfViewLayout
@property (readonly, nonatomic) CGFloat tallestColumnHeight; // ivar: _tallestColumnHeight
@property (readonly, nonatomic) CGFloat tallestHeaderHeight; // ivar: _tallestHeaderHeight
@property (readonly, nonatomic) CGFloat tallestInsetBottom; // ivar: _tallestInsetBottom
@property (readonly, nonatomic) CGFloat tallestInsetTop; // ivar: _tallestInsetTop


-(id)initWithShelfViewLayout:(id)arg0 ;
-(struct CGRect )frameForHeaderInSection:(NSInteger)arg0 ;
-(struct CGRect )frameForItemAtIndexPath:(id)arg0 ;
-(struct UIEdgeInsets )insetForSection:(NSInteger)arg0 ;
-(void)_compute;
-(void)_freeBuffers;
-(void)dealloc;


@end


#endif