// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSDSTORECONTACTSMODEL_H
#define MSDSTORECONTACTSMODEL_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface MSDStoreContactsModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *countryCodeToNumbers; // ivar: _countryCodeToNumbers
@property (readonly, nonatomic) NSDictionary *regionToCountryCode; // ivar: _regionToCountryCode


+(id)sharedInstance;
-(id)contactNumberForCountryCode:(id)arg0 ;
-(id)init;


@end


#endif