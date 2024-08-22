// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUICOMMENTTEMPLATEVIEWELEMENT_H
#define SKUICOMMENTTEMPLATEVIEWELEMENT_H

@class NSString;


#import "SKUIViewElement.h"

@interface SKUICommentTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) NSString *asFormat; // ivar: _asFormat
@property (readonly, nonatomic) NSString *asText; // ivar: _asText
@property (readonly, nonatomic) NSString *commentAsText; // ivar: _commentAsText
@property (readonly, nonatomic) NSString *myselfText; // ivar: _myselfText
@property (readonly, nonatomic) NSString *postButtonText; // ivar: _postButtonText
@property (readonly, nonatomic) NSString *postPlaceholderText; // ivar: _postPlaceholderText
@property (readonly, nonatomic) BOOL scrollNewCommentToView; // ivar: _scrollNewCommentToView
@property (readonly, nonatomic) BOOL showKeyboard; // ivar: _showKeyboard


-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif