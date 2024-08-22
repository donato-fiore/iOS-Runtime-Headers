// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKJSINSPECTORCONTROLLER_H
#define IKJSINSPECTORCONTROLLER_H

@class NSString, RWIProtocolInspector, NSDate;
@protocol IKJSInspectorControllerDelegate, IKNetworkRequestLoader;

#import <Foundation/Foundation.h>

#import "IKDOMDocument.h"
#import "IKAppContext.h"
#import "IKJSInspectorCSSAgent.h"
#import "IKJSInspectorDOMAgent.h"
#import "IKJSInspectorNetworkAgent.h"
#import "IKJSInspectorPageAgent.h"
#import "IKJSInspectorStorageAgent.h"

@interface IKJSInspectorController : NSObject <IKJSInspectorControllerDelegate>

 {
    ? _delegateFlags;
    ? _appFlags;
}


@property (weak, nonatomic) IKDOMDocument *activeDocument; // ivar: _activeDocument
@property (readonly, weak) IKAppContext *appContext; // ivar: _appContext
@property (readonly, weak, nonatomic) IKJSInspectorCSSAgent *cssAgent; // ivar: _cssAgent
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IKJSInspectorControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) IKJSInspectorDOMAgent *domAgent; // ivar: _domAgent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInspectElementModeEnabled) BOOL inspectElementModeEnabled;
@property (readonly, nonatomic) RWIProtocolInspector *inspector; // ivar: _inspector
@property (readonly, nonatomic) NSDate *inspectorConnectDate; // ivar: _inspectorConnectDate
@property (readonly, nonatomic) id *inspectorConnectedToken; // ivar: _inspectorConnectedToken
@property (readonly, nonatomic) id *inspectorDisconnectedToken; // ivar: _inspectorDisconnectedToken
@property (readonly, weak, nonatomic) IKJSInspectorNetworkAgent *networkAgent; // ivar: _networkAgent
@property (readonly, weak, nonatomic) IKJSInspectorPageAgent *pageAgent; // ivar: _pageAgent
@property (readonly, nonatomic) NSObject<IKNetworkRequestLoader> *requestLoader; // ivar: _requestLoader
@property (readonly, weak, nonatomic) IKJSInspectorStorageAgent *storageAgent; // ivar: _storageAgent
@property (readonly) Class superclass;


-(BOOL)cancelHighlightView;
-(BOOL)highlightViewForElementWithID:(NSInteger)arg0 contentColor:(id)arg1 paddingColor:(id)arg2 borderColor:(id)arg3 marginColor:(id)arg4 ;
-(BOOL)highlightViewsForElementsWithIDs:(id)arg0 contentColor:(id)arg1 paddingColor:(id)arg2 borderColor:(id)arg3 marginColor:(id)arg4 ;
-(id)initWithAppContext:(id)arg0 ;
-(id)nodeById:(NSInteger)arg0 ;
-(id)nodesByIds:(id)arg0 ;
-(id)registerLoaderWithIdentifier:(id)arg0 ;
-(id)styleFromComposer:(id)arg0 ;
-(void)_updateCurrentActiveDocument;
-(void)appDocumentDidAppear:(id)arg0 ;
-(void)appDocumentDidDisappear:(id)arg0 ;
-(void)appDocumentDidLoad:(id)arg0 ;
-(void)appDocumentDidUnload:(id)arg0 ;
-(void)appDocumentDidUpdate:(id)arg0 ;
-(void)dealloc;
-(void)didAddEventListenerForDOMNode:(id)arg0 ;
-(void)evaluateMediaQuery:(id)arg0 ;
-(void)inspectElementModeChanged:(BOOL)arg0 ;
-(void)inspectNodeWithID:(NSInteger)arg0 ;
-(void)resetStylesFromNode:(id)arg0 ;
-(void)unregisterLoaderWithIdentifier:(id)arg0 ;
-(void)updateStylesheets;
-(void)willRemoveEventListenerForDOMNode:(id)arg0 ;


@end


#endif