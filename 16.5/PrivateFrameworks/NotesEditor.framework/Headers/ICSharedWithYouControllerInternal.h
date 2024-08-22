// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSHAREDWITHYOUCONTROLLERINTERNAL_H
#define ICSHAREDWITHYOUCONTROLLERINTERNAL_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface ICSharedWithYouControllerInternal : NSObject {
    ? didSaveShareBlock;
    ? didStopSharingBlock;
    ? didFailToUpdateShareBlock;
    ? logger;
    ? highlightCenter;
    ? viewContextObjectsDidChangeObserver;
    ? viewContextDidSaveObserver;
    ? objectIdsOfEditedNotes;
    ? shareObservers;
    ? accountsDidChangeObserver;
    ? processHighlightsQueue;
}


@property (nonatomic, copy) id *didFailToUpdateShareBlock;
@property (nonatomic, copy) id *didSaveShareBlock;
@property (nonatomic, copy) id *didStopSharingBlock;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext; // ivar: managedObjectContext


+(id)sharedController;
-(id)highlightForURL:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)fetchShareMetadataWithURLs:(id)arg0 completion:(id)arg1 ;
-(void)userAcceptedInvitationWithShareMetadata:(id)arg0 associatedObjectID:(id)arg1 ;


@end


#endif