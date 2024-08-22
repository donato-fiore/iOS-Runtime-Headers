// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTEXTMENUMEDIUMCELLLAYOUT_H
#define _UICONTEXTMENUMEDIUMCELLLAYOUT_H

@class NSLayoutConstraint, NSString, NSArray;
@protocol _UIContextMenuCellLayout;

#import <Foundation/Foundation.h>

#import "_UIContextMenuCellContentView.h"

@interface _UIContextMenuMediumCellLayout : NSObject <_UIContextMenuCellLayout>



@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (weak, nonatomic) _UIContextMenuCellContentView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSLayoutConstraint *fittingBottomConstraint; // ivar: _fittingBottomConstraint
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *iconCenterYConstraint; // ivar: _iconCenterYConstraint
@property (readonly, nonatomic) NSUInteger labelMaximumNumberOfLines;
@property (readonly, nonatomic) NSInteger labelTextAlignment;
@property (readonly, nonatomic) NSInteger layoutSize;
@property (retain, nonatomic) NSArray *managedConstraints; // ivar: _managedConstraints
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint


-(id)initWithContentView:(id)arg0 ;
-(id)preferredTextStyleUsingBoldFont:(BOOL)arg0 ;
-(void)installConstraints;
-(void)removeConstraints;
-(void)updateConstraints;


@end


#endif