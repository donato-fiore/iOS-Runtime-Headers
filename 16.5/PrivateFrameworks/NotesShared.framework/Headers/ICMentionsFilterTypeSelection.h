// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMENTIONSFILTERTYPESELECTION_H
#define ICMENTIONSFILTERTYPESELECTION_H

@class NSString;


#import "ICParticipantsFilterTypeSelection.h"

@interface ICMentionsFilterTypeSelection : ICParticipantsFilterTypeSelection

@property (readonly, nonatomic) NSString *currentUserID;


-(NSInteger)filterType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)emptySummary;
-(id)emptySummaryTitle;
-(id)filterName;
-(id)shortEmptySummary;
-(id)summaryWithJoinOperatorMenu;


@end


#endif