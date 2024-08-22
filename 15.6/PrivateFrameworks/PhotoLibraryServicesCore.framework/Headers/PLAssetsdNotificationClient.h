// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETSDNOTIFICATIONCLIENT_H
#define PLASSETSDNOTIFICATIONCLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdNotificationClient : PLAssetsdBaseClient



-(void)asyncNotifyEndOfInterestForUnrenderedCinematicVideoItems;
-(void)asyncNotifyExpiringMomentShareWithUUIDs:(id)arg0 thumbnailImageData:(id)arg1 notificationTitle:(id)arg2 notificationSubtitle:(id)arg3 ;
-(void)asyncNotifyInterestingMemoryNotificationForColletionID:(id)arg0 notificationDeliveryDate:(id)arg1 ;
-(void)asyncNotifyInterestingMemoryNotificationViewedForColletionID:(id)arg0 ;
-(void)asyncNotifyReportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg0 ;
-(void)asyncNotifyResponseToPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg0 acceptInvitation:(BOOL)arg1 ;
-(void)asyncNotifyStartOfInterestForUnrenderedCinematicVideoItems;
-(void)asyncNotifySuggestedCMMNotificationForColletionID:(id)arg0 notificationDeliveryDate:(id)arg1 ;
-(void)asyncNotifySuggestedCMMViewedForColletionID:(id)arg0 ;
-(void)asyncNotifyUserViewedNotificationWithAlbumCloudGUID:(id)arg0 ;


@end


#endif