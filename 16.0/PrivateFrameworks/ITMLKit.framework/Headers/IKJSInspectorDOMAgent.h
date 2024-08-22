// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSINSPECTORDOMAGENT_H
#define IKJSINSPECTORDOMAGENT_H

@class NSMutableDictionary, RWIProtocolDOMNode, NSMapTable, NSString;
@protocol RWIProtocolDOMDomainHandler;

#import <Foundation/Foundation.h>

#import "IKJSInspectorController.h"

@interface IKJSInspectorDOMAgent : NSObject <RWIProtocolDOMDomainHandler>

 {
    NSMutableDictionary *_searches;
    RWIProtocolDOMNode *_rootNode;
    NSMapTable *_eventListenersMap;
    int _eventListenerIdSequence;
}


@property (readonly, weak, nonatomic) IKJSInspectorController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInspectElementModeEnabled) BOOL inspectElementModeEnabled; // ivar: _inspectElementModeEnabled
@property (readonly) Class superclass;


+(id)_nodeIDsFromNodePaths:(id)arg0 ;
+(id)_parseAttributeString:(id)arg0 ;
-(BOOL)hideHighlight;
-(id)initWithInspectorController:(id)arg0 ;
-(int)_eventListenerIDForListener:(id)arg0 ;
-(void)_fullfillNodePath:(id)arg0 ;
-(void)didAddEventListenerForNodeID:(int)arg0 ;
// -(void)discardSearchResultsWithErrorCallback:(id)arg0 successCallback:(unk)arg1 searchId:(id)arg2  ;
-(void)documentDidChange;
-(void)documentDidUpdate;
// -(void)getAccessibilityPropertiesForNodeWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2  ;
// -(void)getAssociatedDataForNodeWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2  ;
// -(void)getAttributesWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2  ;
// -(void)getDataBindingsForNodeWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2  ;
// -(void)getDocumentWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)getEventListenersForNodeWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2  ;
// -(void)getEventListenersForNodeWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2 objectGroup:(unk)arg3  ;
// -(void)getOuterHTMLWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2  ;
// -(void)getSearchResultsWithErrorCallback:(id)arg0 successCallback:(unk)arg1 searchId:(id)arg2 fromIndex:(unk)arg3 toIndex:(id)arg4  ;
// -(void)getSupportedEventNamesWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)hideHighlightWithErrorCallback:(id)arg0 successCallback:(unk)arg1  ;
// -(void)highlightNodeListWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeIds:(id)arg2 highlightConfig:(unk)arg3  ;
// -(void)highlightNodeWithErrorCallback:(id)arg0 successCallback:(unk)arg1 highlightConfig:(id)arg2 nodeId:(unk)arg3 objectId:(id)arg4  ;
-(void)inspectNodeWithID:(NSInteger)arg0 ;
// -(void)moveToWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2 targetNodeId:(unk)arg3 insertBeforeNodeId:(int)arg4  ;
// -(void)performSearchWithErrorCallback:(id)arg0 successCallback:(unk)arg1 query:(id)arg2 nodeIds:(unk)arg3  ;
// -(void)performSearchWithErrorCallback:(id)arg0 successCallback:(unk)arg1 query:(id)arg2 nodeIds:(unk)arg3 caseSensitive:(id)arg4  ;
// -(void)removeAttributeWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2 name:(unk)arg3  ;
// -(void)removeNodeWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2  ;
// -(void)requestChildNodesWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2 depth:(unk)arg3  ;
// -(void)setAttributeValueWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2 name:(unk)arg3 value:(int)arg4  ;
// -(void)setAttributesAsTextWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2 text:(unk)arg3 name:(int)arg4  ;
// -(void)setEventListenerDisabledWithErrorCallback:(id)arg0 successCallback:(unk)arg1 eventListenerId:(id)arg2 disabled:(unk)arg3  ;
// -(void)setInspectModeEnabledWithErrorCallback:(id)arg0 successCallback:(unk)arg1 enabled:(id)arg2 highlightConfig:(unk)arg3  ;
// -(void)setInspectModeEnabledWithErrorCallback:(id)arg0 successCallback:(unk)arg1 enabled:(id)arg2 highlightConfig:(unk)arg3 showRulers:(BOOL)arg4  ;
// -(void)setNodeValueWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2 value:(unk)arg3  ;
// -(void)setOuterHTMLWithErrorCallback:(id)arg0 successCallback:(unk)arg1 nodeId:(id)arg2 outerHTML:(unk)arg3  ;
-(void)willRemoveEventListenerForNodeID:(int)arg0 ;


@end


#endif