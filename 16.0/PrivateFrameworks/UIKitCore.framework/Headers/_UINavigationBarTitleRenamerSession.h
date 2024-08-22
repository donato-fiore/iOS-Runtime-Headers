// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARTITLERENAMERSESSION_H
#define _UINAVIGATIONBARTITLERENAMERSESSION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_UINavigationBarTitleRenamer.h"
#import "UINavigationItem.h"
#import "_UINavigationItemRenameHandler.h"

@interface _UINavigationBarTitleRenamerSession : NSObject

@property (weak, nonatomic) _UINavigationBarTitleRenamer *attachedRenamer; // ivar: _attachedRenamer
@property (readonly, weak, nonatomic) UINavigationItem *navigationItem;
@property (readonly, nonatomic) _UINavigationItemRenameHandler *renameHandler; // ivar: _renameHandler
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)_textFieldShouldEndEditingWithText:(id)arg0 ;
-(id)_sanitizedTitleForTitle:(id)arg0 ;
-(id)_willBeginRenamingWithText:(id)arg0 selectedRange:(struct _NSRange *)arg1 ;
-(id)initWithRenameHandler:(id)arg0 suggestedTitle:(id)arg1 ;
-(void)_textFieldDidEndEditingWithText:(id)arg0 ;
-(void)_willBeginRenamingWithTextField:(id)arg0 ;


@end


#endif