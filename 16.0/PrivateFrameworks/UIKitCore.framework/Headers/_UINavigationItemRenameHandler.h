// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONITEMRENAMEHANDLER_H
#define _UINAVIGATIONITEMRENAMEHANDLER_H


#import <Foundation/Foundation.h>

#import "UINavigationItem.h"

@interface _UINavigationItemRenameHandler : NSObject

@property (copy, nonatomic) id *_wantsPrimaryActionChangedHandler; // ivar: __wantsPrimaryActionChangedHandler
@property (weak, nonatomic) UINavigationItem *associatedItem; // ivar: _associatedItem
@property (copy, nonatomic) id *didEndRenamingHandler; // ivar: _didEndRenamingHandler
@property (copy, nonatomic) id *shouldBeginRenamingHandler; // ivar: _shouldBeginRenamingHandler
@property (copy, nonatomic) id *shouldEndRenamingHandler; // ivar: _shouldEndRenamingHandler
@property (nonatomic) BOOL wantsPrimaryAction;
@property (copy, nonatomic) id *willBeginRenamingHandler; // ivar: _willBeginRenamingHandler
@property (copy, nonatomic) id *willBeginRenamingWithRangeHandler; // ivar: _willBeginRenamingWithRangeHandler
@property (copy, nonatomic) id *willBeginRenamingWithTextFieldHandler; // ivar: _willBeginRenamingWithTextFieldHandler


+(BOOL)defaultNavigationItem:(id)arg0 shouldEndRenamingWithTitle:(id)arg1 ;
+(BOOL)defaultNavigationItemShouldBeginRenaming:(id)arg0 forValidDelegate:(BOOL)arg1 ;
+(id)defaultNavigationItem:(id)arg0 willBeginRenamingWithSuggestedTitle:(id)arg1 selectedRange:(struct _NSRange *)arg2 ;
+(id)handlerWithDidEndRenamingHandler:(id)arg0 ;
+(void)defaultNavigationItem:(id)arg0 didEndRenamingWithTitle:(id)arg1 ;
-(BOOL)_canRename;
-(BOOL)_shouldEndRenamingWithTitle:(id)arg0 ;
-(id)_willBeginRenamingWithText:(id)arg0 selectedRange:(struct _NSRange *)arg1 ;
-(id)init;
-(id)initWithDidEndRenamingHandler:(id)arg0 ;
-(void)_didEndRenamingWithTitle:(id)arg0 ;
-(void)_willBeginRenamingWithTextField:(id)arg0 ;


@end


#endif