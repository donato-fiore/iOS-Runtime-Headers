// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUGEOLOCATIONMETADATACACHEDATAPROVIDER_H
#define TUGEOLOCATIONMETADATACACHEDATAPROVIDER_H

@class PNRPhoneNumberResolver;


#import "TUMetadataCacheDataProvider.h"

@interface TUGeoLocationMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (readonly, nonatomic) PNRPhoneNumberResolver *phoneNumberResolver; // ivar: _phoneNumberResolver


-(id)init;
-(id)locationForMetadataIdentifier:(id)arg0 ;
-(void)updateCacheWithDestinationIDs:(id)arg0 withGroup:(id)arg1 ;


@end


#endif