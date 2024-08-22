// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKDOMNODE_H
#define IKDOMNODE_H

@class JSManagedValue, JSValue, NSString, NSHashTable, NSMutableDictionary;
@protocol NSObject, IKJSDOMNode, _IKJSDOMNodeProxy, _IKJSDOMNode, IKJSDOMEventTarget;


#import "IKJSObject.h"
#import "IKDOMNodeList.h"
#import "IKDOMNode.h"
#import "IKDOMNodeData.h"
#import "IKDOMDocument.h"

@interface IKDOMNode : IKJSObject <NSObject, IKJSDOMNode, _IKJSDOMNodeProxy, _IKJSDOMNode, IKJSDOMEventTarget>

 {
    ? _nodePtr;
    JSManagedValue *_managedDataItem;
}


@property (nonatomic) NSInteger ITMLID; // ivar: _ITMLID
@property (readonly, retain, nonatomic) IKDOMNodeList *childNodes;
@property (weak, nonatomic) JSValue *dataItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSHashTable *domObservers; // ivar: _domObservers
@property (retain, nonatomic) NSMutableDictionary *eventListenersMap; // ivar: _eventListenersMap
@property (readonly, retain, nonatomic) IKDOMNode *firstChild;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, retain, nonatomic) IKDOMNodeData *jsNodeData; // ivar: _jsNodeData
@property (readonly, retain, nonatomic) IKDOMNode *lastChild;
@property (retain, nonatomic) JSManagedValue *managedChildNodeList; // ivar: _managedChildNodeList
@property (retain, nonatomic) IKDOMDocument *managedOwnerDocument; // ivar: _managedOwnerDocument
@property (retain, nonatomic) JSManagedValue *managedParent; // ivar: _managedParent
@property (readonly, retain, nonatomic) JSManagedValue *managedSelf; // ivar: _managedSelf
@property (readonly, weak, nonatomic) IKDOMNode *nextSibling;
@property (readonly, retain, nonatomic) NSString *nodeName;
@property (readonly, nonatomic) NSInteger nodeType;
@property (retain, nonatomic) NSString *nodeValue;
@property (readonly, weak, nonatomic) IKDOMDocument *ownerDocument;
@property (readonly, weak, nonatomic) IKDOMNode *parentNode;
@property (readonly, weak, nonatomic) IKDOMNode *previousSibling;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *textContent;


+(?)handleNodeParentDidChange;
+(?)nodeForNodePtr;
+(?)nodeWithAppContextnodePtr;
+(NSInteger)ITMLIDForITMLIDString:(id)arg0 ;
+(id)ITMLIDStringforITMLID:(NSUInteger)arg0 ;
+(id)_eventListenerMapKeyForType:(id)arg0 useCapture:(BOOL)arg1 ;
+(id)activeDOMNodePtrs;
+(void)setup;
-(?)_appendNode;
-(?)_insertNode:(?)arg0 refNodeoperation;
-(?)initWithAppContextxmlNode;
-(BOOL)_enumerateNodesWithBlock:(id)arg0 ;
-(BOOL)_searchEventListener:(id)arg0 key:(id)arg1 destroy:(BOOL)arg2 ;
-(BOOL)_validateDOMOperation:(NSUInteger)arg0 newNode:(id)arg1 refNode:(id)arg2 ;
-(BOOL)clearUpdates;
-(BOOL)contains:(id)arg0 ;
-(BOOL)dispatchEvent:(id)arg0 ;
-(BOOL)hasChildNodes;
-(BOOL)isEqualNode:(id)arg0 ;
-(BOOL)isSameNode:(id)arg0 ;
-(NSUInteger)childElementCount;
-(id)appendChild:(id)arg0 ;
-(id)asPrivateIKJSDOMNode;
-(id)children;
-(id)cloneNode:(BOOL)arg0 ;
-(id)firstElementChild;
-(id)getFeature:(id)arg0 ;
-(id)ik_nodePath;
-(id)ik_nodeWithId:(NSInteger)arg0 ;
-(id)ik_nodesWithIds:(id)arg0 ;
-(id)ik_pathsForSearchQuery:(id)arg0 compareOptions:(NSUInteger)arg1 currentPath:(id)arg2 ;
-(id)insertBefore:(id)arg0 ;
-(id)lastElementChild;
-(id)nodesForXPath:(id)arg0 error:(*id)arg1 ;
-(id)performDOMOperation:(NSUInteger)arg0 newNode:(id)arg1 refNode:(id)arg2 ;
-(id)removeChild:(id)arg0 ;
-(id)replaceChild:(id)arg0 ;
-(id)toStringWithError:(*id)arg0 ;
-(struct _xmlNode *)nodePtr;
-(void)_childrenUpdatedWithUpdatedChildNodes:(id)arg0 withDocument:(id)arg1 ;
-(void)_linkManagedObjects;
-(void)_markSubtreeUpdatesForAncestorsOfNode:(id)arg0 ;
-(void)_notifyUpdatesToDOMObservers;
-(void)_updatedAndMark:(BOOL)arg0 withDocument:(id)arg1 ;
-(void)addDOMObserver:(id)arg0 ;
-(void)addEventListener:(id)arg0 ;
-(void)adoptFeatureWithName:(id)arg0 fromDOMNode:(id)arg1 ;
-(void)childrenUpdatedWithUpdatedChildNodes:(id)arg0 notify:(BOOL)arg1 ;
-(void)dealloc;
-(void)enumerateEventListenersUsingBlock:(id)arg0 ;
-(void)enumerateEventListernersForType:(id)arg0 xmlAttribute:(id)arg1 phase:(NSInteger)arg2 usingBlock:(id)arg3 ;
-(void)removeDOMObserver:(id)arg0 ;
-(void)removeEventListener:(id)arg0 ;
-(void)updatedAndMark:(BOOL)arg0 notify:(BOOL)arg1 ;


@end


#endif