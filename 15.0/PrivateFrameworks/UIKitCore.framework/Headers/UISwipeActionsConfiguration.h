// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISWIPEACTIONSCONFIGURATION_H
#define UISWIPEACTIONSCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface UISwipeActionsConfiguration : NSObject

@property (nonatomic, getter=_roundedStyleCornerRadius, setter=_setRoundedStyleCornerRadius:) CGFloat _roundedStyleCornerRadius; // ivar: __roundedStyleCornerRadius
@property (nonatomic, getter=_swipeActionsStyle, setter=_setSwipeActionsStyle:) NSInteger _swipeActionsStyle; // ivar: __swipeActionsStyle
@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic, getter=_autosizesButtons, setter=_setAutosizesButtons:) BOOL autosizesButtons; // ivar: _autosizesButtons
@property (nonatomic) BOOL performsFirstActionWithFullSwipe; // ivar: _performsFirstActionWithFullSwipe


+(id)configurationWithActions:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif