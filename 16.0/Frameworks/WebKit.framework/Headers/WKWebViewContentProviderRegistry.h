// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKWEBVIEWCONTENTPROVIDERREGISTRY_H
#define WKWEBVIEWCONTENTPROVIDERREGISTRY_H


#import <Foundation/Foundation.h>


@interface WKWebViewContentProviderRegistry : NSObject {
    HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider>>, WTF::HashTableTraits> _contentProviderForMIMEType;
    HashCountedSet<WebKit::WebPageProxy *, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>> _pages;
}




-(?)_mimeTypesWithCustomContentProviders;
-(Class)providerForMIMEType:(*void)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)addPage:(*void)arg0 ;
-(void)registerProvider:(Class)arg0 forMIMEType:(*void)arg1 ;
-(void)removePage:(*void)arg0 ;


@end


#endif