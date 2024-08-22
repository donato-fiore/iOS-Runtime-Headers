// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFACTIVITYEXTENSIONITEMPROVIDER_H
#define _SFACTIVITYEXTENSIONITEMPROVIDER_H

@class SFActivityItemProvider, NSExtensionItem;



@interface _SFActivityExtensionItemProvider : SFActivityItemProvider

@property (retain, nonatomic) NSExtensionItem *extensionItem; // ivar: _extensionItem


-(id)_itemForActivityType:(id)arg0 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)initWithExtensionItem:(id)arg0 URL:(id)arg1 pageTitle:(id)arg2 webView:(id)arg3 ;
-(id)item;


@end


#endif