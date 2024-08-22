// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBSYSTEMLAYOUTVIEWCONTROLLER_H
#define UIKBSYSTEMLAYOUTVIEWCONTROLLER_H

@class NSMutableArray;


#import "UIViewController.h"

@interface UIKBSystemLayoutViewController : UIViewController {
    NSMutableArray *_constraints;
}


@property (nonatomic) CGSize centeredOffsets; // ivar: _centeredOffsets
@property (nonatomic) NSUInteger horizontalLayoutType; // ivar: _horizontalLayoutType
@property (nonatomic) UIEdgeInsets minimumInsets; // ivar: _minimumInsets
@property (nonatomic) NSUInteger verticalLayoutType; // ivar: _verticalLayoutType


+(id)systemLayoutViewControllerWithViewController:(id)arg0 ;
-(void)dealloc;
-(void)updateViewConstraints;


@end


#endif