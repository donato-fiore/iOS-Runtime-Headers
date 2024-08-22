// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STREGIONRATINGS_H
#define STREGIONRATINGS_H

@class NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface STRegionRatings : NSObject

@property (readonly, copy) NSArray *localizedRegionAndCodePairs;
@property (readonly, copy) NSDictionary *localizedRegionsByCode;
@property (readonly, copy) NSString *preferredRegion;
@property (retain, nonatomic) NSDictionary *regionRatingsData; // ivar: _regionRatingsData


+(id)sharedRatings;
+(void)loadRegionRatingsWithCompletionHandler:(id)arg0 ;
-(id)_localizedLabelForRegion:(id)arg0 rating:(id)arg1 ;
-(id)_localizedRatingsForRegion:(id)arg0 type:(id)arg1 allContentKey:(id)arg2 noContentKey:(id)arg3 ;
-(id)_overrideValueForString:(id)arg0 ;
-(id)getClosestRestrictionMatch:(id)arg0 within:(id)arg1 ;
-(id)getRatingSystemTypeFrom:(id)arg0 ;
-(id)localizedAppRatingsForRegion:(id)arg0 ;
-(id)localizedMovieRatingsForRegion:(id)arg0 ;
-(id)localizedStringForAppRatingLabel:(id)arg0 ;
-(id)localizedTVRatingsForRegion:(id)arg0 ;
-(void)loadRegionRatingsDataWithCompletionHandler:(id)arg0 ;


@end


#endif