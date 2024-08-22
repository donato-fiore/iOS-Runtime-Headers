// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWEBTEXTPLACEHOLDER_H
#define UIWEBTEXTPLACEHOLDER_H

@class DOMElement;


#import "UITextPlaceholder.h"
#import "UIWebDocumentView.h"

@interface UIWebTextPlaceholder : UITextPlaceholder {
    UIWebDocumentView *_webDocumentView;
}


@property (retain, nonatomic) DOMElement *element; // ivar: _element


+(id)placeholderWithWebDocumentView:(id)arg0 ;
-(id)rects;
-(void)dealloc;


@end


#endif