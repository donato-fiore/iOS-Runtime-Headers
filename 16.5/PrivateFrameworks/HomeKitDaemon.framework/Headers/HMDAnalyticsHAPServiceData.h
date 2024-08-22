// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDANALYTICSHAPSERVICEDATA_H
#define HMDANALYTICSHAPSERVICEDATA_H

@class HMFObject, NSString;



@interface HMDAnalyticsHAPServiceData : HMFObject

@property (readonly, nonatomic) BOOL isPrimary; // ivar: _isPrimary
@property (readonly, nonatomic) BOOL ownerUser; // ivar: _ownerUser
@property (readonly, nonatomic) NSString *serviceType; // ivar: _serviceType


-(id)initWithServiceType:(id)arg0 isPrimary:(BOOL)arg1 ownerUser:(BOOL)arg2 ;


@end


#endif