// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBTEXTEDITINGTRAITS_H
#define UIKBTEXTEDITINGTRAITS_H


#import <Foundation/Foundation.h>

#import "UIResponder.h"

@interface UIKBTextEditingTraits : NSObject

@property (readonly, nonatomic) BOOL canCopy; // ivar: _canCopy
@property (nonatomic) BOOL canCut; // ivar: _canCut
@property (readonly, nonatomic) BOOL canMoveCursorLeft; // ivar: _canMoveCursorLeft
@property (readonly, nonatomic) BOOL canMoveCursorRight; // ivar: _canMoveCursorRight
@property (readonly, nonatomic) BOOL canPaste; // ivar: _canPaste
@property (readonly, nonatomic) BOOL canToggleBoldface; // ivar: _canToggleBoldface
@property (readonly, nonatomic) BOOL canToggleItalics; // ivar: _canToggleItalics
@property (readonly, nonatomic) BOOL canToggleUnderline; // ivar: _canToggleUnderline
@property (readonly, weak, nonatomic) UIResponder *firstResponder; // ivar: _firstResponder
@property (readonly, nonatomic) BOOL isBold; // ivar: _isBold
@property (readonly, nonatomic) BOOL isItalicized; // ivar: _isItalicized
@property (readonly, nonatomic) BOOL isUnderlined; // ivar: _isUnderlined
@property (readonly, nonatomic) BOOL supportStyling; // ivar: _supportStyling


// +(id)traitsForEditingInteractionWithFirstResponder:(id)arg0 canRespondBlock:(id)arg1 keyMaskFlags:(unk)arg2  ;
+(id)traitsWithResponder:(id)arg0 keyMaskFlags:(NSUInteger)arg1 ;
// -(id)initWithResponder:(id)arg0 canRespondBlock:(id)arg1 keyMaskFlags:(unk)arg2 sender:(NSUInteger)arg3  ;


@end


#endif