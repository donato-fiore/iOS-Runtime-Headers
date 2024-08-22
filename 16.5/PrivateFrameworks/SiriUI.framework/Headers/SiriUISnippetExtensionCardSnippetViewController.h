// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUISNIPPETEXTENSIONCARDSNIPPETVIEWCONTROLLER_H
#define SIRIUISNIPPETEXTENSIONCARDSNIPPETVIEWCONTROLLER_H

@class SAUISnippet, NSExtension;


#import "SiriUICardSnippetViewController.h"
#import "SiriUISashItem.h"

@interface SiriUISnippetExtensionCardSnippetViewController : SiriUICardSnippetViewController {
    SAUISnippet *_snippet;
    SiriUISashItem *_sashItem;
}


@property (retain, nonatomic) NSExtension *extension; // ivar: _extension


+(void)initialize;
-(id)initWithSnippet:(id)arg0 extension:(id)arg1 ;
-(id)sashItem;
-(id)snippet;
-(void)_cancelTouchesIfNecessary;
-(void)_resumeTouchesIfNecessary;
-(void)setSnippet:(id)arg0 ;


@end


#endif