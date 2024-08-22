// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDALBUMACTIVITYGADGETPROVIDER_H
#define PXSHAREDALBUMACTIVITYGADGETPROVIDER_H

@class NSString, NSMutableArray;
@protocol PXFeedSectionInfosManagerDelegate, PXSharedAlbumInvitationGadgetDelegate, PXGadgetTransition, PXGadgetDelegate;


#import "PXGadgetProvider.h"
#import "PXFeedSectionInfosManager.h"
#import "PXGadgetNavigationHelper.h"

@interface PXSharedAlbumActivityGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXSharedAlbumInvitationGadgetDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *delayedChanges; // ivar: _delayedChanges
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger estimatedGadgetCount; // ivar: _estimatedGadgetCount
@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager; // ivar: _feedSectionInfosManager
@property (readonly, nonatomic) NSObject<PXGadgetTransition> *gadgetTransition;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *invitationAlbumCloudGUID; // ivar: _invitationAlbumCloudGUID
@property (readonly, nonatomic) NSInteger maxNumberOfSections; // ivar: _maxNumberOfSections
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *nextGadgetResponder;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (readonly) Class superclass;


-(NSUInteger)_indexForGadget:(id)arg0 ;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)_gadgetsForSectionIndexes:(id)arg0 ;
-(id)_indexesOfSectionInfosToDisplay:(NSUInteger)arg0 ;
-(id)init;
-(void)_processDelayedChanges;
-(void)_processDelayedChangesImmediatelyIfNecessary:(id)arg0 ;
-(void)_update:(id)arg0 ;
-(void)dealloc;
-(void)feedSectionInfosManager:(id)arg0 sectionInfosDidChange:(id)arg1 ;
-(void)gadget:(id)arg0 didAccept:(BOOL)arg1 ;
-(void)generateGadgets;
-(void)loadDataForGadgets;


@end


#endif