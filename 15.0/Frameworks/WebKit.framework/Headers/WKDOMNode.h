// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKDOMNODE_H
#define WKDOMNODE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "WKDOMDocument.h"
#import "WKDOMNode.h"

@interface WKDOMNode : NSObject {
    RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> _impl;
}


@property (readonly) WKDOMDocument *document;
@property (readonly) WKDOMNode *firstChild;
@property (readonly) WKDOMNode *lastChild;
@property (readonly) WKDOMNode *nextSibling;
@property (readonly) WKDOMNode *parentNode;
@property (readonly) WKDOMNode *previousSibling;
@property (readonly) NSArray *textRects;


-(id)_initWithImpl:(*void)arg0 ;
-(struct OpaqueWKBundleNodeHandle *)_copyBundleNodeHandleRef;
-(void)appendChild:(id)arg0 ;
-(void)dealloc;
-(void)insertNode:(id)arg0 before:(id)arg1 ;
-(void)removeChild:(id)arg0 ;


@end


#endif