// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10AIRPLAYKIT26REMOTEINSPECTORCOORDINATOR_H
#define _TTC10AIRPLAYKIT26REMOTEINSPECTORCOORDINATOR_H

@class SwiftObject;
@protocol APKRemoteInspectorCSSAgentDelegate, APKRemoteInspectorPageAgentDelegate, APKRemoteInspectorDOMAgentDelegate, APKRemoteInspectorNetworkAgentDelegate;



@interface _TtC10AirPlayKit26RemoteInspectorCoordinator : SwiftObject <APKRemoteInspectorCSSAgentDelegate, APKRemoteInspectorPageAgentDelegate, APKRemoteInspectorDOMAgentDelegate, APKRemoteInspectorNetworkAgentDelegate>

 {
    ? state;
    ? registry;
    ? lock;
    ? onResourcesRequest;
    ? onResourceContentRequest;
}




-(?)CSSAgent:(?)arg0 onComputedStylesRequestWithIdentifiercompletion;
-(?)CSSAgent:(?)arg0 onInlineStylesRequestWithIdentifiercompletion;
-(?)DOMAgent:(?)arg0 onAttributesRequestWithIdentifiercompletion;
-(?)DOMAgent:(?)arg0 onChildNodeRequestWithParentIdentifier:(?)arg1 depthcompletion;
-(?)DOMAgent:(?)arg0 onOuterHTMLRequestWithIdentifiercompletion;
-(?)DOMAgentonDocumentWithCompletion;
-(?)pageAgent:(?)arg0 onResourceContentRequestWithIdentifiercompletion;
-(?)pageAgentonResourcesRequestWithCompletion;


@end


#endif