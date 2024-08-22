// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTFIELDEDITINGTOKEN_H
#define _UITEXTFIELDEDITINGTOKEN_H

@class NSArray, NSString;
@protocol _UITextFieldEditingToken;

#import <Foundation/Foundation.h>

#import "_UICascadingTextStorage.h"

@interface _UITextFieldEditingToken : NSObject <_UITextFieldEditingToken>

 {
    ? _flags;
}


@property (readonly, nonatomic) NSArray *attributeNames; // ivar: _attributeNames
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL restoreDefaultAttributes;
@property (nonatomic) BOOL restoreTextAttributes;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) _UICascadingTextStorage *textStorage; // ivar: _textStorage


-(BOOL)endEditing;
-(id)initWithTextStorage:(id)arg0 attributeNames:(id)arg1 ;


@end


#endif