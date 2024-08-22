// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUISUGGESTIONTOKEN_H
#define MUISUGGESTIONTOKEN_H

@class _CSSuggestionToken, UIImage, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface MUISuggestionToken : NSObject

@property (readonly, nonatomic) _CSSuggestionToken *csToken; // ivar: _csToken
@property (readonly, nonatomic) BOOL hasMultipleScopes;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) _NSRange replacementRange; // ivar: _replacementRange
@property (readonly, nonatomic) NSString *scopeName;
@property (readonly, nonatomic) NSArray *scopeNames; // ivar: _scopeNames
@property (nonatomic) NSUInteger selectedScopeIndex; // ivar: _selectedScopeIndex
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)csTokensFromMailSuggestionTokens:(id)arg0 ;
+(id)suggestionTokenWithTitle:(id)arg0 ;
-(id)initWithCSToken:(id)arg0 ;
-(id)initWithTitle:(id)arg0 ;


@end


#endif