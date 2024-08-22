// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTCOMPETINGTEAMPLAYDETAILHEADERITEM_H
#define SASTCOMPETINGTEAMPLAYDETAILHEADERITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SAUIDecoratedText.h"

@interface SASTCompetingTeamPlayDetailHeaderItem : AceObject <SASTTemplateItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SAUIDecoratedText *firstTeam;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIDecoratedText *secondTeam;
@property (readonly) Class superclass;


+(id)competingTeamPlayDetailHeaderItem;
+(id)competingTeamPlayDetailHeaderItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif