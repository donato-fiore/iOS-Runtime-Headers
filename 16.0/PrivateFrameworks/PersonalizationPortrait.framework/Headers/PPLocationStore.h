// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPLOCATIONSTORE_H
#define PPLOCATIONSTORE_H

@class NSString;
@protocol PPFeedbackAccepting, PPClientStore;

#import <Foundation/Foundation.h>

#import "PPClientFeedbackHelper.h"

@interface PPLocationStore : NSObject <PPFeedbackAccepting, PPClientStore>

 {
    PPClientFeedbackHelper *_clientFeedbackHelper;
}


@property (retain, nonatomic) NSString *clientIdentifier;


+(id)_mergedThoroughfareForThorughfare:(id)arg0 subThoroughfare:(id)arg1 subPremises:(id)arg2 ;
+(id)defaultStore;
+(id)describeLocationConsumer:(NSUInteger)arg0 ;
+(id)new;
+(id)placemarkWithLatitudeDegrees:(id)arg0 longitudeDegrees:(id)arg1 name:(id)arg2 thoroughfare:(id)arg3 subthoroughFare:(id)arg4 locality:(id)arg5 subLocality:(id)arg6 administrativeArea:(id)arg7 subAdministrativeArea:(id)arg8 postalCode:(id)arg9 countryCode:(id)arg10 country:(id)arg11 inlandWater:(id)arg12 ocean:(id)arg13 areasOfInterest:(id)arg14 ;
+(id)placemarkWithLocation:(id)arg0 name:(id)arg1 thoroughfare:(id)arg2 subthoroughFare:(id)arg3 locality:(id)arg4 subLocality:(id)arg5 administrativeArea:(id)arg6 subAdministrativeArea:(id)arg7 postalCode:(id)arg8 countryCode:(id)arg9 country:(id)arg10 inlandWater:(id)arg11 ocean:(id)arg12 areasOfInterest:(id)arg13 ;
+(id)placemarkWithName:(id)arg0 clLocation:(id)arg1 ;
-(BOOL)clearWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 ;
-(BOOL)cloudSyncWithError:(*id)arg0 ;
-(BOOL)donateLocations:(id)arg0 source:(id)arg1 contextualNamedEntities:(id)arg2 algorithm:(unsigned short)arg3 cloudSync:(BOOL)arg4 decayRate:(CGFloat)arg5 error:(*id)arg6 ;
-(BOOL)iterLocationRecordsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)iterRankedLocationsWithQuery:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)locationRecordsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)rankedLocationsWithQuery:(id)arg0 error:(*id)arg1 ;
-(void)registerFeedback:(id)arg0 clientIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)registerFeedback:(id)arg0 completion:(id)arg1 ;


@end


#endif