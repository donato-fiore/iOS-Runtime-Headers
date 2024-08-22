// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPREMOTEFAVORITESCONTAINERPERSISTER_H
#define MSPREMOTEFAVORITESCONTAINERPERSISTER_H

@class NSUUID, NSString;
@protocol MSPMapsPushDaemonProxyObserver;


#import "MSPContainerPersister.h"

@interface MSPRemoteFavoritesContainerPersister : MSPContainerPersister <MSPMapsPushDaemonProxyObserver>

 {
    NSUUID *_lastOperationIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_reportErrorIfAny:(id)arg0 purpose:(id)arg1 ;
-(void)commitByMergingWithStateSnapshot:(id)arg0 mergeOptions:(id)arg1 completion:(id)arg2 ;
-(void)commitEditWithNewContents:(id)arg0 edits:(id)arg1 appliedToOldContents:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)eraseWithCompletion:(id)arg0 ;
-(void)favoritesDidChange;
-(void)fetchContentsWithCompletion:(id)arg0 ;
-(void)fetchStateSnapshotWithCompletion:(id)arg0 ;
-(void)historyDidChange;
-(void)pushDaemonProxyReceivedNotificationData:(id)arg0 forType:(id)arg1 recordIdentifier:(id)arg2 ;


@end


#endif