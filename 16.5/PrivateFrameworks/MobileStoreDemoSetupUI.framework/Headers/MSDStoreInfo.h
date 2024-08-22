// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDSTOREINFO_H
#define MSDSTOREINFO_H

@class NSString, CLLocation;

#import <Foundation/Foundation.h>


@interface MSDStoreInfo : NSObject

@property (readonly, nonatomic) NSString *appleID; // ivar: _appleID
@property (readonly, nonatomic) NSString *companyName; // ivar: _companyName
@property (readonly, nonatomic) BOOL confirmStoreSelection; // ivar: _confirmStoreSelection
@property (readonly, nonatomic) NSString *confirmationCode; // ivar: _confirmationCode
@property (readonly, nonatomic) NSString *fullAddress; // ivar: _fullAddress
@property (readonly, nonatomic) BOOL isHQ; // ivar: _isHQ
@property (readonly, nonatomic) BOOL isNearby; // ivar: _isNearby
@property (readonly, nonatomic) NSString *storeDescription; // ivar: _storeDescription
@property (readonly, nonatomic) CLLocation *storeLocation; // ivar: _storeLocation
@property (readonly, nonatomic) NSString *storeName; // ivar: _storeName


-(id)_buildFullAddress:(id)arg0 ;
-(id)_buildStoreDescription:(id)arg0 ;
-(id)_localizedCapitalizedTrimmedString:(id)arg0 ;
-(id)description;
-(id)initWithDict:(id)arg0 ;


@end


#endif