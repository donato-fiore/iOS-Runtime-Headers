// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKAPPDOCUMENT_H
#define IKAPPDOCUMENT_H

@class NSMutableDictionary, NSMapTable, NSDictionary, NSString, NSError;
@protocol IKJSDOMDocumentAppBridgeInternal, IKStyleMediaQueryEvaluator, IKAppDocumentDelegate, IKNetworkRequestLoader;

#import <Foundation/Foundation.h>

#import "IKAppContext.h"
#import "IKHeadElement.h"
#import "IKDOMDocument.h"
#import "IKViewElement.h"
#import "IKJSNavigationDocument.h"
#import "IKJSObject.h"
#import "IKViewElementStyleFactory.h"

@interface IKAppDocument : NSObject <IKJSDOMDocumentAppBridgeInternal, IKStyleMediaQueryEvaluator>

 {
    NSMutableDictionary *_mediaQueryCache;
    NSInteger _implicitUpdatesStack;
    BOOL _parsingDOM;
    NSMapTable *_viewElementRegistry;
    BOOL _isViewElementRegistryDirty;
}


@property (readonly, weak) IKAppContext *appContext; // ivar: _appContext
@property (retain, nonatomic) NSDictionary *cachedSnapshotImpressionsMap; // ivar: _cachedSnapshotImpressionsMap
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IKAppDocumentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain) IKHeadElement *headElement; // ivar: _headElement
@property (retain) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isImplicitlyUpdated) BOOL implicitlyUpdated; // ivar: _implicitlyUpdated
@property (nonatomic) CGFloat impressionThreshold; // ivar: _impressionThreshold
@property (nonatomic) CGFloat impressionViewablePercentage; // ivar: _impressionViewablePercentage
@property (retain, nonatomic) NSMutableDictionary *impressions; // ivar: _impressions
@property (readonly, weak, nonatomic) IKDOMDocument *jsDocument; // ivar: _jsDocument
@property (retain) IKViewElement *navigationBarElement; // ivar: _navigationBarElement
@property (readonly, weak, nonatomic) IKJSNavigationDocument *navigationDocument;
@property (readonly, weak, nonatomic) IKJSObject *owner; // ivar: _owner
@property (readonly, nonatomic) NSObject<IKNetworkRequestLoader> *requestLoader;
@property (retain, nonatomic) IKViewElementStyleFactory *styleFactory; // ivar: _styleFactory
@property (getter=isSubtreeUpdated) BOOL subtreeUpdated; // ivar: _subtreeUpdated
@property (readonly) Class superclass;
@property (retain) IKViewElement *templateElement; // ivar: _templateElement
@property (retain) IKViewElement *toolbarElement; // ivar: _toolbarElement
@property (nonatomic, getter=isUpdated) BOOL updated; // ivar: _updated


-(BOOL)_isUpdateAllowed;
-(BOOL)evaluateStyleMediaQueryList:(id)arg0 ;
-(BOOL)markImplicitlyUpdated;
-(id)_viewElementForNodeID:(NSUInteger)arg0 ;
-(id)impressionsMatching:(id)arg0 reset:(BOOL)arg1 ;
-(id)initWithAppContext:(id)arg0 document:(id)arg1 owner:(id)arg2 ;
-(id)initWithAppContext:(id)arg0 document:(id)arg1 owner:(id)arg2 extraInfo:(id)arg3 ;
-(id)recordedImpressions;
-(id)recordedImpressions:(BOOL)arg0 ;
-(id)retrieveJSElementForViewElement:(id)arg0 jsContext:(id)arg1 ;
-(id)snapshotImpressions;
-(id)viewElementForNodeID:(NSUInteger)arg0 ;
-(void)_resetImplicitUpdates;
-(void)_setViewElementStylesDirtyForced:(BOOL)arg0 ;
-(void)_updateWithXML:(id)arg0 ;
-(void)dealloc;
-(void)dispatchDocumentCallback:(id)arg0 eventType:(NSUInteger)arg1 ;
-(void)onActive;
-(void)onAppear;
-(void)onDisappear;
-(void)onImpressionsChange:(id)arg0 ;
-(void)onInactive;
-(void)onLoad;
-(void)onNeedsUpdateWithCompletion:(id)arg0 ;
-(void)onPerformanceMetricsChange:(id)arg0 ;
-(void)onUnload;
-(void)onUpdate;
-(void)onViewAttributesChangeWithArguments:(id)arg0 completion:(id)arg1 ;
-(void)popTrackingImplictUpdates;
-(void)pushTrackingImplictUpdates;
-(void)recordImpressionsForViewElements:(id)arg0 ;
-(void)recordedImpressions:(BOOL)arg0 completion:(id)arg1 ;
-(void)recordedImpressionsMatching:(id)arg0 reset:(BOOL)arg1 completion:(id)arg2 ;
-(void)runTestWithName:(id)arg0 options:(id)arg1 ;
-(void)scrollToTop;
-(void)setNeedsUpdateForDocument:(id)arg0 ;
-(void)setViewElementStylesDirty;
-(void)snapshotImpressionsForViewElements:(id)arg0 ;
-(void)updateForDocument:(id)arg0 ;


@end


#endif