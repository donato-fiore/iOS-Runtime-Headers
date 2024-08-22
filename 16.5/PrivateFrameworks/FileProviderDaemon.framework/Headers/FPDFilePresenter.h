// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDFILEPRESENTER_H
#define FPDFILEPRESENTER_H

@class NSData, FPItem, NSString, FPItemID, NSURL;
@protocol FPXEnumeratorObserver, FPDLifetimeExtender, FPXEnumerator, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPDExtensionManager.h"
#import "FPDDomain.h"

@interface FPDFilePresenter : NSObject <FPXEnumeratorObserver, FPDLifetimeExtender>

 {
    FPDExtensionManager *_manager;
    id<FPXEnumerator> *_enumerator;
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_changeToken;
    FPItem *_currentItem;
    BOOL _isRunning;
    BOOL _isFetchingChanges;
    BOOL _shouldRefetchChanges;
    BOOL _presenterWantsUbiqitousAttributes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FPDDomain *domain; // ivar: _domain
@property (copy, nonatomic) id *filePresenterID; // ivar: _filePresenterID
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEnumeratorActive; // ivar: _isEnumeratorActive
@property (nonatomic) BOOL isFrontmost; // ivar: _isFrontmost
@property (retain, nonatomic) FPItemID *itemID; // ivar: _itemID
@property (readonly, nonatomic) FPItemID *observedItemID; // ivar: _observedItemID
@property (readonly, nonatomic) NSURL *presentedItemURL; // ivar: _presentedItemURL
@property (nonatomic) int presenterPid; // ivar: _presenterPid
@property (readonly) NSString *prettyDescription;
@property (readonly) int requestEffectivePID; // ivar: _requestEffectivePID
@property (readonly) Class superclass;
@property (readonly) CGFloat timeout;
@property NSUInteger timeoutState;


+(id)presenter:(id)arg0 withItemID:(id)arg1 pid:(int)arg2 urlHint:(id)arg3 domain:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_newCoordinator;
-(id)_presentedItemDescription:(BOOL)arg0 ;
-(id)enumerator;
-(id)initWithIdentifier:(id)arg0 itemID:(id)arg1 pid:(int)arg2 urlHint:(id)arg3 domain:(id)arg4 ;
-(void)_destroyEnumerator;
-(void)_enumeratorRequestDidFailWithXPCError:(id)arg0 ;
-(void)_fetchChangeToken;
-(void)_fetchUpdates;
-(void)becomeFrontmost:(BOOL)arg0 inWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)didUpdateItem:(id)arg0 ;
-(void)dumpStateTo:(id)arg0 ;
-(void)enumerationResultsDidChange;
-(void)receiveUpdatedItems:(id)arg0 deletedItemsIdentifiers:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif