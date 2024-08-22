// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADAPPADVERTISEMENT_H
#define ADAPPADVERTISEMENT_H

@class NSString, APOdmlServerResponse;
@protocol APOdmlRankable;


#import "ADAppRepresentation.h"
#import "ADDataObject.h"

@interface ADAppAdvertisement : ADAppRepresentation <APOdmlRankable>



@property (retain, nonatomic) ADDataObject *adData; // ivar: _adData
@property (readonly, nonatomic) NSString *adamID;
@property (retain, nonatomic) NSString *instanceID; // ivar: _instanceID
@property (readonly, nonatomic) APOdmlServerResponse *odmlResponse; // ivar: _odmlResponse
@property (retain, nonatomic) NSString *selectedCppID; // ivar: _selectedCppID


-(id)initWithAdamID:(id)arg0 assetInfo:(id)arg1 adData:(id)arg2 ;
-(id)initWithAdamID:(id)arg0 assetInfo:(id)arg1 adData:(id)arg2 instanceID:(id)arg3 ;
-(id)initWithAdamID:(id)arg0 cppIDs:(id)arg1 serverCppID:(id)arg2 adData:(id)arg3 instanceID:(id)arg4 ;


@end


#endif