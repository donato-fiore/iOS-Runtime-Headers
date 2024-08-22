// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PARSPOTLIGHTPROPENSITY_H
#define PARSPOTLIGHTPROPENSITY_H

@class NSManagedObject, NSDate;
@protocol NSFetchRequestResult;



@interface PARSpotlightPropensity : NSManagedObject <NSFetchRequestResult>



@property (nonatomic) short appLaunch;
@property (nonatomic) short onDeviceAddressBookData;
@property (nonatomic) short onDeviceOtherPersonalData;
@property (nonatomic) short other;
@property (nonatomic) short parsec;
@property (nonatomic) short parsecAppStore;
@property (nonatomic) short parsecMaps;
@property (nonatomic) short parsecNews;
@property (nonatomic) short parsecOther;
@property (nonatomic) short parsecStocks;
@property (nonatomic) short parsecWeather;
@property (nonatomic) short parsecWeb;
@property (nonatomic) short parsecWiki;
@property (nonatomic) short punchout;
@property (nonatomic) short querySuggestion;
@property (nonatomic) short siriSuggestions;
@property (nonatomic) short thirdPartyInAppContent;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic) short webSuggestions;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif