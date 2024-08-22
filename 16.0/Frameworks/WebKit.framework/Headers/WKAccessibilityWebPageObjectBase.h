// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKACCESSIBILITYWEBPAGEOBJECTBASE_H
#define WKACCESSIBILITYWEBPAGEOBJECTBASE_H


#import <Foundation/Foundation.h>


@interface WKAccessibilityWebPageObjectBase : NSObject {
    NakedPtr<WebKit::WebPage> m_page;
    ObjectIdentifier<WebCore::PageIdentifierType> m_pageID;
    RetainPtr<id> m_parent;
    BOOL m_hasMainFramePlugin;
}




-(id)accessibilityFocusedUIElement;
-(id)accessibilityPluginObject;
-(id)accessibilityRootObjectWrapper;
-(struct NakedPtr<WebCore::AXObjectCache> )axObjectCache;
-(void)setHasMainFramePlugin:(BOOL)arg0 ;
-(void)setRemoteParent:(id)arg0 ;
-(void)setWebPage:(struct NakedPtr<WebKit::WebPage> )arg0 ;


@end


#endif