// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDOMDOCUMENT_H
#define IKDOMDOCUMENT_H

@class NSString;
@protocol NSObject, IKJSDOMDocument, _IKJSDOMDocumentProxy, _IKJSDOMDocument, IKJSDOMXPathEvaluator, IKNetworkRequestLoader, IKJSDOMDocumentAppBridge;


#import "IKDOMNode.h"
#import "IKDOMElement.h"
#import "IKDOMImplementation.h"
#import "IKJSNavigationDocument.h"

@interface IKDOMDocument : IKDOMNode <NSObject, IKJSDOMDocument, _IKJSDOMDocumentProxy, _IKJSDOMDocument, IKJSDOMXPathEvaluator>

 {
    ? _appBridgeFlags;
}


@property (retain, nonatomic, setter=_setDocumentURI:) NSString *_documentURI; // ivar: __documentURI
@property (readonly, nonatomic) NSObject<IKNetworkRequestLoader> *_requestLoader; // ivar: __requestLoader
@property (weak, nonatomic) NSObject<IKJSDOMDocumentAppBridge> *appBridge; // ivar: _appBridge
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) IKDOMElement *documentElement;
@property (retain, nonatomic) NSString *documentURI;
@property (nonatomic, getter=isEmbeddedScriptExecuted) BOOL embeddedScriptExecuted; // ivar: _embeddedScriptExecuted
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) IKDOMImplementation *implementation;
@property (readonly, retain, nonatomic) NSString *inputEncoding;
@property (nonatomic) NSUInteger itmlIDSequence; // ivar: _itmlIDSequence
@property (weak, nonatomic) IKJSNavigationDocument *navigationDocument;
@property (nonatomic) BOOL strictErrorChecking;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSString *xmlEncoding;
@property (nonatomic) BOOL xmlStandalone;
@property (retain, nonatomic) NSString *xmlVersion;


+(struct _xmlDoc *)_documentWithXMLStr:(id)arg0 lsInput:(id)arg1 error:(*id)arg2 ;
+(void)_resetUpdatesForNode:(id)arg0 ;
-(?)_updateITMLIDRecursivelyForNodePtr;
-(BOOL)markUpdated;
-(NSInteger)nodeType;
-(id)adoptNode:(id)arg0 ;
-(id)asPrivateIKJSDOMDocument;
-(id)createCDATASection:(id)arg0 ;
-(id)createComment:(id)arg0 ;
-(id)createDocumentFragment;
-(id)createElement:(id)arg0 ;
-(id)createExpression:(id)arg0 ;
-(id)createTextNode:(id)arg0 ;
-(id)evaluate:(id)arg0 ;
-(id)getElementById:(id)arg0 ;
-(id)getElementsByTagName:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 input:(id)arg1 error:(*id)arg2 ;
-(id)initWithAppContext:(id)arg0 qualifiedName:(id)arg1 ;
-(id)initWithAppContext:(id)arg0 xmlStr:(id)arg1 error:(*id)arg2 ;
-(id)matchingImpressions:(id)arg0 ;
-(id)nodeName;
-(id)recordedImpressions:(id)arg0 ;
-(id)snapshotImpressions;
-(void)_executeEmbeddedScriptWithExtraInfo:(id)arg0 ;
-(void)dealloc;
-(void)prepareForPresentationWithExtraInfo:(id)arg0 ;
-(void)recordedImpressions:(id)arg0 ;
-(void)recordedImpressionsMatching:(id)arg0 ;
-(void)replace:(id)arg0 ;
-(void)runTest:(id)arg0 ;
-(void)scrollToTop;
-(void)setITMLIDForNode:(id)arg0 ;
-(void)setNeedsUpdate;
-(void)swapITMLIDForNode:(id)arg0 withITMLIDForNode:(id)arg1 ;


@end


#endif