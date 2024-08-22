// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETSDNOTIFICATIONSERVICE_H
#define PLASSETSDNOTIFICATIONSERVICE_H

@class NSString;
@protocol PLAssetsdNotificationServiceProtocol;


#import "PLAbstractLibraryServicesManagerService.h"

@interface PLAssetsdNotificationService : PLAbstractLibraryServicesManagerService <PLAssetsdNotificationServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)noteGoingToExpireCMMsAlertWithCMMUUIDs:(id)arg0 thumbnailImageData:(id)arg1 notificationTitle:(id)arg2 notificationSubtitle:(id)arg3 ;
-(void)noteInterestingMemoryAlertViewedWithUUID:(id)arg0 ;
-(void)noteInterestingMemoryAlertWithMemoryUUID:(id)arg0 notificationDeliveryDate:(id)arg1 ;
-(void)noteSuggestedCMMAlertViewedWithCMMUUID:(id)arg0 ;
-(void)noteSuggestedCMMAlertWithCMMUUID:(id)arg0 notificationDeliveryDate:(id)arg1 ;
-(void)notifyEndOfInterestForUnrenderedCinematicVideoItems;
-(void)notifyStartOfInterestForUnrenderedCinematicVideoItems;
-(void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg0 ;
-(void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(id)arg0 acceptInvitation:(BOOL)arg1 ;
-(void)userViewedNotificationWithAlbumCloudGUID:(id)arg0 ;


@end


#endif