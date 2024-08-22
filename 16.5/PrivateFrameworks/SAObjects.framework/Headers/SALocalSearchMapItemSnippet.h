// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALOCALSEARCHMAPITEMSNIPPET_H
#define SALOCALSEARCHMAPITEMSNIPPET_H

@class NSArray, NSNumber;


#import "SAUISnippet.h"
#import "SALocation.h"

@interface SALocalSearchMapItemSnippet : SAUISnippet

@property (nonatomic) BOOL chainResultSet;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *providerCommand;
@property (copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property (nonatomic) BOOL searchAlongRoute;
@property (retain, nonatomic) SALocation *searchRegionCenter;
@property (copy, nonatomic) NSNumber *userCurrentLocation;


+(id)mapItemSnippet;
+(id)mapItemSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif