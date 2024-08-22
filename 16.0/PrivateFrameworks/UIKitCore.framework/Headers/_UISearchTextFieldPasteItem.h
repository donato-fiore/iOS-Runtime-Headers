// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHTEXTFIELDPASTEITEM_H
#define _UISEARCHTEXTFIELDPASTEITEM_H

@class NSString, NSDictionary, NSItemProvider;
@protocol UISearchTextFieldPasteItem;


#import "UITextPasteItem.h"
#import "UISearchToken.h"

@interface _UISearchTextFieldPasteItem : UITextPasteItem <UISearchTextFieldPasteItem>



@property (retain, nonatomic, setter=setSearchTokenResult:) UISearchToken *_searchTokenResult; // ivar: _searchTokenResult
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *defaultAttributes;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) id *localObject;
@property (readonly) Class superclass;




@end


#endif