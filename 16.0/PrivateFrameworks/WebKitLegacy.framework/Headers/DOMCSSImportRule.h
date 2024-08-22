// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMCSSIMPORTRULE_H
#define DOMCSSIMPORTRULE_H

@class NSString;


#import "DOMCSSRule.h"
#import "DOMMediaList.h"
#import "DOMCSSStyleSheet.h"

@interface DOMCSSImportRule : DOMCSSRule

@property (readonly, copy) NSString *href;
@property (readonly) DOMMediaList *media;
@property (readonly) DOMCSSStyleSheet *styleSheet;




@end


#endif