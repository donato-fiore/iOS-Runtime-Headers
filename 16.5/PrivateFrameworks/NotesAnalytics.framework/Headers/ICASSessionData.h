// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSESSIONDATA_H
#define ICASSESSIONDATA_H

@class NSArray, NSNumber, NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASCellularRadioAccessTechnology.h"

@interface ICASSessionData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSArray *accountTypeSummary; // ivar: _accountTypeSummary
@property (readonly, nonatomic) NSNumber *bioAuthEnabled; // ivar: _bioAuthEnabled
@property (readonly, nonatomic) ICASCellularRadioAccessTechnology *cellularRadioAccessTechnology; // ivar: _cellularRadioAccessTechnology
@property (readonly, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) NSNumber *isSaltRegenerated; // ivar: _isSaltRegenerated
@property (readonly, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, nonatomic) NSNumber *localNotesEnabled; // ivar: _localNotesEnabled
@property (readonly, nonatomic) NSString *productType; // ivar: _productType
@property (readonly, nonatomic) NSString *sessionType; // ivar: _sessionType
@property (readonly, nonatomic) NSNumber *utcOffset; // ivar: _utcOffset


+(id)dataName;
-(id)initWithUtcOffset:(id)arg0 countryCode:(id)arg1 languageCode:(id)arg2 productType:(id)arg3 cellularRadioAccessTechnology:(id)arg4 bioAuthEnabled:(id)arg5 localNotesEnabled:(id)arg6 accountTypeSummary:(id)arg7 sessionType:(id)arg8 isSaltRegenerated:(id)arg9 ;
-(id)toDict;


@end


#endif