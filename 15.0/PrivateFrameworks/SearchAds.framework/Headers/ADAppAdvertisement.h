// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADAPPADVERTISEMENT_H
#define ADAPPADVERTISEMENT_H

@class NSString, ADOdmlResponseV2;
@protocol APOdmlRankable;


#import "ADAppRepresentation.h"
#import "ADDataObject.h"

@interface ADAppAdvertisement : ADAppRepresentation <APOdmlRankable>



@property (retain, nonatomic) ADDataObject *adData; // ivar: _adData
@property (readonly, nonatomic) NSString *adamID;
@property (retain, nonatomic) NSString *instanceID; // ivar: _instanceID
@property (readonly, nonatomic) ADOdmlResponseV2 *odmlResponse; // ivar: _odmlResponse


-(id)initWithAdamID:(id)arg0 assetInfo:(id)arg1 adData:(id)arg2 ;
-(id)initWithAdamID:(id)arg0 assetInfo:(id)arg1 adData:(id)arg2 instanceID:(id)arg3 ;


@end


#endif