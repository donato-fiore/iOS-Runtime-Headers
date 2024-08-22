// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSIRISEARCHREQUEST_H
#define PXSIRISEARCHREQUEST_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PXSiriSearchRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *queryTokens; // ivar: _queryTokens


+(BOOL)supportsSecureCoding;
-(BOOL)_useNLDateSearch;
-(id)_queryTokensForActivities:(id)arg0 ;
-(id)_queryTokensForAlbumName:(id)arg0 ;
-(id)_queryTokensForDateCreated:(id)arg0 ;
-(id)_queryTokensForEvents:(id)arg0 ;
-(id)_queryTokensForGeographicalFeatures:(id)arg0 ;
-(id)_queryTokensForLocationCreated:(id)arg0 ;
-(id)_queryTokensForPeopleInPhoto:(id)arg0 peopleInPhotoOperator:(NSInteger)arg1 ;
-(id)_queryTokensForPhotoAttributeOptions:(NSUInteger)arg0 ;
-(id)_queryTokensForPlaces:(id)arg0 ;
-(id)_queryTokensForSearchTerms:(id)arg0 searchTermsOperator:(NSInteger)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchForPhotosIntent:(id)arg0 ;
-(id)initWithStartPhotoPlaybackIntent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif