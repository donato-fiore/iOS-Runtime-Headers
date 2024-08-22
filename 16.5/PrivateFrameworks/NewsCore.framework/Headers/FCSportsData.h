// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCSPORTSDATA_H
#define FCSPORTSDATA_H

@class NSString, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface FCSportsData : NSObject

@property (copy, nonatomic) NSString *UMCCanonicalID; // ivar: _UMCCanonicalID
@property (nonatomic) BOOL hideLocationInMasthead; // ivar: _hideLocationInMasthead
@property (copy, nonatomic) NSDate *sportsEventStartTime; // ivar: _sportsEventStartTime
@property (copy, nonatomic) NSString *sportsFullName; // ivar: _sportsFullName
@property (nonatomic) NSUInteger sportsLeagueType; // ivar: _sportsLeagueType
@property (copy, nonatomic) NSString *sportsLocation; // ivar: _sportsLocation
@property (copy, nonatomic) NSString *sportsNameAbbreviation; // ivar: _sportsNameAbbreviation
@property (copy, nonatomic) NSString *sportsNickname; // ivar: _sportsNickname
@property (copy, nonatomic) NSString *sportsPrimaryName; // ivar: _sportsPrimaryName
@property (copy, nonatomic) NSString *sportsSecondaryName; // ivar: _sportsSecondaryName
@property (nonatomic) NSUInteger sportsType; // ivar: _sportsType
@property (copy, nonatomic) NSString *sportsTypeDisplayName; // ivar: _sportsTypeDisplayName
@property (copy, nonatomic) NSString *sportsTypePluralizedDisplayName; // ivar: _sportsTypePluralizedDisplayName
@property (retain, nonatomic) NSArray *topLevelGroupsTagIdentifiers; // ivar: _topLevelGroupsTagIdentifiers
@property (copy, nonatomic) NSString *topLevelSportTagIdentifier; // ivar: _topLevelSportTagIdentifier


-(id)initWithDictionary:(id)arg0 ;
-(void)_inflateSportsDataFromJSONDictionary:(id)arg0 ;


@end


#endif