// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKJSRESTRICTIONS_H
#define IKJSRESTRICTIONS_H

@class NSString;
@protocol NSObject, IKJSRestrictions, _IKJSRestrictionsProxy, _IKJSRestrictions;


#import "IKJSObject.h"

@interface IKJSRestrictions : IKJSObject <NSObject, IKJSRestrictions, _IKJSRestrictionsProxy, _IKJSRestrictions>



@property (readonly, nonatomic) BOOL allowArtistActivity;
@property (readonly, nonatomic) BOOL allowsErotica;
@property (readonly, nonatomic) BOOL allowsExplicit;
@property (readonly, nonatomic) BOOL allowsITunes;
@property (readonly, nonatomic) BOOL allowsMusicVideos;
@property (readonly, nonatomic) BOOL allowsShowingUndownloadedMovies;
@property (readonly, nonatomic) BOOL allowsShowingUndownloadedTVShows;
@property (readonly, nonatomic) BOOL appAnalyticsAllowed;
@property (readonly, nonatomic) BOOL appInstallationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger maxAppRank;
@property (readonly, nonatomic) NSString *maxAppRating;
@property (readonly, nonatomic) NSInteger maxMovieRank;
@property (readonly, nonatomic) NSInteger maxTVShowRank;
@property (readonly) Class superclass;


+(id)restrictionsDidChangeNotificationName;
-(id)_contentRestrictionsCountryCode;
-(id)_ratingForSetting:(id)arg0 domain:(id)arg1 countryCode:(id)arg2 ;
-(id)asPrivateIKJSRestrictions;
-(id)maxMovieRatingForCountry:(id)arg0 ;
-(id)maxTVShowRatingForCountry:(id)arg0 ;


@end


#endif