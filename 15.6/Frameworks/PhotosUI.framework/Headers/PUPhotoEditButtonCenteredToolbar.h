// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOEDITBUTTONCENTEREDTOOLBAR_H
#define PUPHOTOEDITBUTTONCENTEREDTOOLBAR_H

@class UIView, NSArray;


#import "PUPhotoEditToolbar.h"

@interface PUPhotoEditButtonCenteredToolbar : PUPhotoEditToolbar {
    UIView *_centerView;
    NSArray *_leadingViews;
    NSArray *_trailingViews;
    NSArray *_leadingLayoutConstraints;
    NSArray *_trailingLayoutConstraints;
    NSArray *_centerLayoutConstraints;
}


@property (readonly, nonatomic) CGFloat interItemSpacing;


-(void)_addCenterConstraintsWithMetrics:(id)arg0 verticalLayout:(BOOL)arg1 ;
-(void)_addLeadingConstraintsWithMetrics:(id)arg0 verticalLayout:(BOOL)arg1 ;
-(void)_addTrailingConstraintsWithMetrics:(id)arg0 verticalLayout:(BOOL)arg1 ;
-(void)_invalidateAllConstraints;
-(void)setCenterView:(id)arg0 leadingViews:(id)arg1 trailingViews:(id)arg2 ;


@end


#endif