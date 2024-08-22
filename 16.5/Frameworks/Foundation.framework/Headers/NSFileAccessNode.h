// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILEACCESSNODE_H
#define NSFILEACCESSNODE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSFileAccessNode.h"
#import "NSString.h"
#import "NSFileProviderProxy.h"

@interface NSFileAccessNode : NSObject {
    NSFileAccessNode *_parent;
    NSString *_name;
    NSString *_normalizedName;
    NSFileAccessNode *_symbolicLinkDestination;
    NSUInteger _symbolicLinkReferenceCount;
    NSMutableDictionary *_childrenByNormalizedName;
    id *_presenterOrPresenters;
    NSFileProviderProxy *_provider;
    id *_accessClaimOrClaims;
    BOOL _isArbitrationBoundary;
    BOOL _isFilePackageIsFigured;
    BOOL _isFilePackage;
    BOOL _symbolicLinkIsFirmlink;
    NSString *_lastRequestedChildName;
    NSFileAccessNode *_lastRequestedChild;
    id *_progressPublisherOrPublishers;
    id *_progressSubscriberOrSubscribers;
}




-(BOOL)_mayContainCriticalDebuggingInformationExcludingReactors:(BOOL)arg0 ;
-(BOOL)itemIsFilePackage;
-(BOOL)itemIsInItemAtLocation:(id)arg0 ;
-(BOOL)itemIsItemAtLocation:(id)arg0 ;
-(BOOL)itemIsSubarbitrable;
-(BOOL)setProvider:(id)arg0 ;
-(id)_childrenExcludingExcessNodes:(BOOL)arg0 excludingReactors:(BOOL)arg1 ;
-(id)biggestFilePackageLocation;
-(id)childForRange:(struct _NSRange )arg0 ofPath:(id)arg1 ;
-(id)descendantAtPath:(id)arg0 componentRange:(struct _NSRange )arg1 create:(BOOL)arg2 ;
-(id)descendantAtPath:(id)arg0 componentRange:(struct _NSRange )arg1 forAddingLeafNode:(id)arg2 create:(BOOL)arg3 ;
-(id)descendantForFileURL:(id)arg0 ;
-(id)description;
-(id)descriptionWithIndenting:(id)arg0 excludingExcessNodes:(BOOL)arg1 excludingReactors:(BOOL)arg2 ;
-(id)initWithParent:(id)arg0 name:(id)arg1 normalizedName:(id)arg2 ;
-(id)itemProvider;
-(id)normalizationOfChildName:(id)arg0 ;
-(id)parent;
-(id)pathExceptPrivate;
-(id)pathFromAncestor:(id)arg0 ;
-(id)pathToDescendantForFileURL:(id)arg0 componentRange:(struct _NSRange *)arg1 ;
-(id)sensitiveDescription;
-(id)sensitiveSubarbiterDescription;
-(id)standardizedURL;
-(id)subarbiterDescription;
-(id)url;
-(id)urlOfSubitemAtPath:(id)arg0 plusPath:(id)arg1 ;
-(void)_forEachRelevantAccessClaimExcludingClaimsFromSuperarbiter:(BOOL)arg0 performProcedure:(id)arg1 ;
-(void)_setLinkDestination:(id)arg0 ;
-(void)addAccessClaim:(id)arg0 ;
-(void)addPresenter:(id)arg0 ;
-(void)addProgressPublisher:(id)arg0 ;
-(void)addProgressSubscriber:(id)arg0 ;
-(void)assertDead;
-(void)assertDescendantsLive;
-(void)assertLive;
-(void)dealloc;
-(void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(id)arg0 ;
-(void)forEachAccessClaimOnItemPerformProcedure:(id)arg0 ;
-(void)forEachDescendantPerformProcedure:(id)arg0 ;
-(void)forEachPresenterOfContainedItemPerformProcedure:(id)arg0 ;
-(void)forEachPresenterOfContainingFilePackagePerformProcedure:(id)arg0 ;
-(void)forEachPresenterOfContainingItemPerformProcedure:(id)arg0 ;
-(void)forEachPresenterOfItemOrContainedItemPerformProcedure:(id)arg0 ;
-(void)forEachPresenterOfItemOrContainingItemPerformProcedure:(id)arg0 ;
-(void)forEachPresenterOfItemPerformProcedure:(id)arg0 ;
-(void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(id)arg0 ;
-(void)forEachProgressPublisherOfItemPerformProcedure:(id)arg0 ;
-(void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(id)arg0 ;
-(void)forEachProgressSubscriberOfItemPerformProcedure:(id)arg0 ;
-(void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(id)arg0 ;
-(void)forEachReactorToItemOrContainedItemPerformProcedure:(id)arg0 ;
-(void)forEachRelevantAccessClaimForEvaluatingAgainstClaim:(id)arg0 performProcedure:(id)arg1 ;
-(void)forEachRelevantAccessClaimPerformProcedure:(id)arg0 ;
-(void)removeAccessClaim:(id)arg0 ;
-(void)removeChildForNormalizedName:(id)arg0 ;
-(void)removePresenter:(id)arg0 ;
-(void)removeProgressPublisher:(id)arg0 ;
-(void)removeProgressSubscriber:(id)arg0 ;
-(void)removeProvider:(id)arg0 ;
-(void)removeSelfIfUseless;
-(void)setArbitrationBoundary;
-(void)setChild:(id)arg0 forName:(id)arg1 normalizedName:(id)arg2 ;
-(void)setFirmlinkDestination:(id)arg0 ;
-(void)setParent:(id)arg0 name:(id)arg1 ;
-(void)setSymbolicLinkDestination:(id)arg0 ;


@end


#endif