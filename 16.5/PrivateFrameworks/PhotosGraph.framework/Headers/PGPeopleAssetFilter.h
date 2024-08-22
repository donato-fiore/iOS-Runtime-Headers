// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPEOPLEASSETFILTER_H
#define PGPEOPLEASSETFILTER_H

@class NSString;
@protocol PGAssetFilter;

#import <Foundation/Foundation.h>


@interface PGPeopleAssetFilter : NSObject <PGAssetFilter>

 {
    BOOL _petFilter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maximumNumberOfOtherFacesPresent; // ivar: _maximumNumberOfOtherFacesPresent
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)name;
-(BOOL)asset:(id)arg0 passesForPersonOrPetLocalIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)filteredAssetsFromAssets:(id)arg0 withPersonOrPetLocalIdentifier:(id)arg1 ;
-(id)initForPetWithMaximumNumberOfOtherFacesPresent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMaximumNumberOfOtherFacesPresent:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif