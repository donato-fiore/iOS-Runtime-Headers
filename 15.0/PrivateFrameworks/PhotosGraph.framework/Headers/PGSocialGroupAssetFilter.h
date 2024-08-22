// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGSOCIALGROUPASSETFILTER_H
#define PGSOCIALGROUPASSETFILTER_H

@class NSString;
@protocol PGAssetFilter;

#import <Foundation/Foundation.h>


@interface PGSocialGroupAssetFilter : NSObject <PGAssetFilter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat minimumRatioOfFacesComingFromSocialGroup; // ivar: _minimumRatioOfFacesComingFromSocialGroup
@property (readonly, nonatomic) CGFloat minimumRatioOfPersonsInSocialGroupPresent; // ivar: _minimumRatioOfPersonsInSocialGroupPresent
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)criteriaWithDictionary:(id)arg0 ;
+(id)name;
-(BOOL)asset:(id)arg0 passesForPersonLocalIdentifiersInSocialGroup:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)filteredAssetsFromAssets:(id)arg0 withPersonLocalIdentifiersInSocialGroup:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif