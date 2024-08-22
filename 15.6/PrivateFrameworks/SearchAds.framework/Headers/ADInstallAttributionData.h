// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADINSTALLATTRIBUTIONDATA_H
#define ADINSTALLATTRIBUTIONDATA_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface ADInstallAttributionData : NSObject

@property (readonly, copy, nonatomic) NSString *adNetworkID; // ivar: _adNetworkID
@property (readonly, copy, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (readonly, copy, nonatomic) NSNumber *campaignID; // ivar: _campaignID
@property (readonly, copy, nonatomic) NSString *signature; // ivar: _signature
@property (readonly, copy, nonatomic) NSNumber *sourceAppAdamID; // ivar: _sourceAppAdamID
@property (readonly, copy, nonatomic) NSNumber *timestamp; // ivar: _timestamp
@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


-(id)dictionaryRepresentation;
-(id)initWithDict:(id)arg0 ;
-(void)recordStoreKitAdTap:(id)arg0 ;


@end


#endif