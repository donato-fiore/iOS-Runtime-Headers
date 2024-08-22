// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCPERIODICSYNCOPERATION_H
#define BRCPERIODICSYNCOPERATION_H

@class BRCOperation, NSString, CKServerChangeToken;
@protocol BRCOperationSubclass;


#import "BRCContainerScheduler.h"

@interface BRCPeriodicSyncOperation : BRCOperation <BRCOperationSubclass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKServerChangeToken *metadataChangeToken; // ivar: _metadataChangeToken
@property (readonly, nonatomic) BRCContainerScheduler *scheduler; // ivar: _scheduler
@property (readonly, nonatomic) CKServerChangeToken *sideCarChangeToken; // ivar: _sideCarChangeToken
@property (readonly) Class superclass;
@property (readonly, nonatomic) CKServerChangeToken *zoneHealthChangeToken; // ivar: _zoneHealthChangeToken


-(BOOL)scheduleSyncDownIfNeededForZoneID:(id)arg0 zoneIfAny:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithContainerScheduler:(id)arg0 metadataChangeToken:(id)arg1 zoneHealthChangeToken:(id)arg2 sideCarChangeToken:(id)arg3 ;
-(void)main;


@end


#endif