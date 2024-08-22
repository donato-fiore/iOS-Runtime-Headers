// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKACTIONMENUCONTROLLER_H
#define CKACTIONMENUCONTROLLER_H

@class NSArray;
@protocol CKActionMenuControllerDelegate;

#import <Foundation/Foundation.h>

#import "CKActionMenuView.h"

@interface CKActionMenuController : NSObject

@property (readonly, copy, nonatomic) NSArray *actionMenuItems;
@property (retain, nonatomic) CKActionMenuView *actionMenuView; // ivar: _actionMenuView
@property (readonly, nonatomic, getter=isActionMenuVisible) BOOL actionMenuVisible;
@property (readonly, nonatomic) NSUInteger defaultActionIndex; // ivar: _defaultActionIndex
@property (weak, nonatomic) NSObject<CKActionMenuControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL shouldDismissOnTap; // ivar: _shouldDismissOnTap


-(id)initWithActionMenuItems:(id)arg0 defaultActionIndex:(NSUInteger)arg1 blurEffectStyle:(NSInteger)arg2 ;
-(struct CGRect )convertActionMenuFrameToView:(id)arg0 ;
-(void)dealloc;
-(void)dismissActionMenuAnimated:(BOOL)arg0 ;
-(void)presentActionMenuFromPoint:(struct CGPoint )arg0 inView:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif