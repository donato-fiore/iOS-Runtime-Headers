// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVSHELFLAYOUTSECTION_H
#define TVSHELFLAYOUTSECTION_H


#import <Foundation/Foundation.h>


@interface TVShelfLayoutSection : NSObject {
    *CGRect _itemFrames;
}


@property (nonatomic) CGRect itemsBoundingFrame; // ivar: _itemsBoundingFrame
@property (nonatomic) NSInteger numberOfItems; // ivar: _numberOfItems
@property (nonatomic) CGRect sectionHeaderFrame; // ivar: _sectionHeaderFrame
@property (nonatomic) CGFloat sectionHeaderHorizontalOffset; // ivar: _sectionHeaderHorizontalOffset
@property (nonatomic) CGFloat sectionHeaderVerticalBump; // ivar: _sectionHeaderVerticalBump
@property (nonatomic) UIEdgeInsets sectionInset; // ivar: _sectionInset


-(struct CGRect )firstItemFrame;
-(struct CGRect )itemFrameAtIndex:(NSInteger)arg0 ;
-(struct CGRect )lastItemFrame;
-(void)dealloc;
-(void)setItemFrame:(struct CGRect )arg0 atIndex:(NSInteger)arg1 ;


@end


#endif