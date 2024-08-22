// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERACLIPSQUOTASERVERNOTIFICATION_H
#define HMDCAMERACLIPSQUOTASERVERNOTIFICATION_H

@class HMFObject, NSString, NSDictionary;



@interface HMDCameraClipsQuotaServerNotification : HMFObject

@property (readonly, copy) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly) NSInteger reason; // ivar: _reason
@property (readonly, copy) NSString *requestID; // ivar: _requestID
@property (readonly, copy) NSString *userDSID; // ivar: _userDSID


-(id)initWithContainerIdentifier:(id)arg0 reason:(NSInteger)arg1 requestID:(id)arg2 userDSID:(id)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif