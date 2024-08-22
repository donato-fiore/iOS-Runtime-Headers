// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKBASICSPORTINGEVENTMETADATA_H
#define WLKBASICSPORTINGEVENTMETADATA_H

@class NSString, NSDate;


#import "WLKBasicContentMetadata.h"

@interface WLKBasicSportingEventMetadata : WLKBasicContentMetadata

@property (readonly, copy, nonatomic) NSString *leagueName; // ivar: _leagueName
@property (readonly, copy, nonatomic) NSString *leagueShortName; // ivar: _leagueShortName
@property (readonly, copy, nonatomic) NSDate *startGameTime; // ivar: _startGameTime


-(id)initWithDictionary:(id)arg0 ;


@end


#endif