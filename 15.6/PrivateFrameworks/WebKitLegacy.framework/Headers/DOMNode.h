// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOMNODE_H
#define DOMNODE_H

@class NSString;
@protocol DOMEventTarget;


#import "DOMObject.h"
#import "DOMNamedNodeMap.h"
#import "DOMNodeList.h"
#import "DOMNode.h"
#import "DOMDocument.h"
#import "DOMElement.h"
#import "WebArchive.h"

@interface DOMNode : DOMObject <DOMEventTarget>



@property (readonly) DOMNamedNodeMap *attributes;
@property (readonly, copy) NSString *baseURI;
@property (readonly) DOMNodeList *childNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) DOMNode *firstChild;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isContentEditable;
@property (readonly) DOMNode *lastChild;
@property (readonly, copy) NSString *localName;
@property (readonly, copy) NSString *namespaceURI;
@property (readonly) DOMNode *nextSibling;
@property (readonly, copy) NSString *nodeName;
@property (readonly) unsigned short nodeType;
@property (copy) NSString *nodeValue;
@property (readonly) DOMDocument *ownerDocument;
@property (readonly) DOMElement *parentElement;
@property (readonly) DOMNode *parentNode;
@property (copy) NSString *prefix;
@property (readonly) DOMNode *previousSibling;
@property (readonly) Class superclass;
@property (copy) NSString *textContent;
@property (readonly, nonatomic) WebArchive *webArchive;


+(id)_nodeFromJSWrapper:(struct OpaqueJSValue *)arg0 ;
-(*void)_linkElement;
-(BOOL)contains:(id)arg0 ;
-(BOOL)containsOnlyInlineObjects;
-(BOOL)dispatchEvent:(id)arg0 ;
-(BOOL)hasAttributes;
-(BOOL)hasChildNodes;
-(BOOL)isConnected;
-(BOOL)isDefaultNamespace:(id)arg0 ;
-(BOOL)isEqualNode:(id)arg0 ;
-(BOOL)isHorizontalWritingMode;
-(BOOL)isSameNode:(id)arg0 ;
-(BOOL)isSelectableBlock;
-(BOOL)isSupported:(id)arg0 ;
-(BOOL)isSupported:(id)arg0 version:(id)arg1 ;
-(CGFloat)textHeight;
-(float)computedFontSize;
-(id)absoluteQuads;
-(id)appendChild:(id)arg0 ;
-(id)borderRadii;
-(id)boundingBoxes;
-(id)cloneNode:(BOOL)arg0 ;
-(id)endPosition;
-(id)findExplodedTextNodeAtPoint:(struct CGPoint )arg0 ;
-(id)hrefLabel;
-(id)hrefTarget;
-(id)hrefTitle;
-(id)hrefURL;
-(id)insertBefore:(id)arg0 ;
-(id)insertBefore:(id)arg0 refChild:(id)arg1 ;
-(id)lineBoxQuads;
-(id)lineBoxRects;
-(id)lookupNamespaceURI:(id)arg0 ;
-(id)lookupPrefix:(id)arg0 ;
-(id)markupString;
-(id)nextFocusNode;
-(id)previousFocusNode;
-(id)rangeOfContainingParagraph;
-(id)rangeOfContents;
-(id)removeChild:(id)arg0 ;
-(id)replaceChild:(id)arg0 ;
-(id)replaceChild:(id)arg0 oldChild:(id)arg1 ;
-(id)startPosition;
-(id)textRects;
-(id)webArchiveByFilteringSubframes:(id)arg0 ;
-(struct CGRect )_renderRect:(*BOOL)arg0 ;
-(struct CGRect )boundingBox;
-(struct CGRect )boundingBoxUsingTransforms;
-(struct CGRect )boundingFrame;
-(struct CGRect )hrefFrame;
-(struct RootObject *)_rootObject;
-(struct _WKQuad )absoluteQuad;
-(struct _WKQuad )absoluteQuadAndInsideFixedPosition:(*BOOL)arg0 ;
-(struct _WKQuad )innerFrameQuad;
-(unsigned short)compareDocumentPosition:(id)arg0 ;
-(void)addEventListener:(id)arg0 ;
-(void)addEventListener:(id)arg0 listener:(id)arg1 useCapture:(BOOL)arg2 ;
-(void)dealloc;
-(void)getPreviewSnapshotImage:(struct CGImage **)arg0 andRects:(*id)arg1 ;
-(void)hidePlaceholder;
-(void)inspect;
-(void)normalize;
-(void)removeEventListener:(id)arg0 ;
-(void)removeEventListener:(id)arg0 listener:(id)arg1 useCapture:(BOOL)arg2 ;
-(void)showPlaceholderIfNecessary;


@end


#endif