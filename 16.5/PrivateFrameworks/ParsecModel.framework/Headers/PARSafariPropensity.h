// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PARSAFARIPROPENSITY_H
#define PARSAFARIPROPENSITY_H

@class NSManagedObject, NSDate;
@protocol NSFetchRequestResult;



@interface PARSafariPropensity : NSManagedObject <NSFetchRequestResult>



@property (nonatomic) short goToSite;
@property (nonatomic) short localGoto;
@property (nonatomic) short localTap;
@property (nonatomic) short other;
@property (nonatomic) short parsecAppStore;
@property (nonatomic) short parsecGoto;
@property (nonatomic) short parsecMaps;
@property (nonatomic) short parsecNews;
@property (nonatomic) short parsecOther;
@property (nonatomic) short parsecStocks;
@property (nonatomic) short parsecTap;
@property (nonatomic) short parsecWeather;
@property (nonatomic) short parsecWeb;
@property (nonatomic) short parsecWiki;
@property (nonatomic) short thirdPartyCompletionOrRecentSearch;
@property (nonatomic) short thirdPartyGoto;
@property (nonatomic) short thirdPartyTap;
@property (nonatomic, copy) NSDate *timestamp;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif