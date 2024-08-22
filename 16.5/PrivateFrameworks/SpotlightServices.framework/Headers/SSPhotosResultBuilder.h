// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSPHOTOSRESULTBUILDER_H
#define SSPHOTOSRESULTBUILDER_H

@class NSArray, NSString;


#import "SSResultBuilder.h"

@interface SSPhotosResultBuilder : SSResultBuilder

@property (nonatomic) BOOL isSyndicated; // ivar: _isSyndicated
@property (retain, nonatomic) NSArray *matchedPeople; // ivar: _matchedPeople
@property (retain, nonatomic) NSArray *namesOfPeopleInPhoto; // ivar: _namesOfPeopleInPhoto
@property (retain, nonatomic) NSArray *peopleInPhoto; // ivar: _peopleInPhoto
@property (retain, nonatomic) NSArray *personPhotoIdentifiersOfPeopleInPhoto; // ivar: _personPhotoIdentifiersOfPeopleInPhoto
@property (retain, nonatomic) NSString *photoIdentifier; // ivar: _photoIdentifier


+(BOOL)isCoreSpotlightResult;
+(BOOL)supportsResult:(id)arg0 ;
+(id)bundleId;
-(id)appBundleId;
-(id)buildCommand;
-(id)buildImageCardSection;
-(id)buildInlineCardSections;
-(id)buildResult;
-(id)buildThumbnail;
-(id)initWithResult:(id)arg0 ;
-(id)subclassBuildHorizontallyScrollingCardSection;
-(void)populateMatchedPeopleInPhoto;


@end


#endif