// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASPORTSLEAGUE_H
#define SASPORTSLEAGUE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SASportsSeason.h"

@interface SASportsLeague : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *diplayedText;
@property (nonatomic) BOOL displayTeamLocationOverName;
@property (copy, nonatomic) NSString *displayedText;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SASportsSeason *season;
@property (copy, nonatomic) NSString *sport;
@property (readonly) Class superclass;


+(id)league;
+(id)leagueWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif