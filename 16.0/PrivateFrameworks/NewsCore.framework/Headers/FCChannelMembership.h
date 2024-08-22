// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCHANNELMEMBERSHIP_H
#define FCCHANNELMEMBERSHIP_H

@class NSString, NTPBChannelMembershipRecord;

#import <Foundation/Foundation.h>

#import "FCInterestToken.h"

@interface FCChannelMembership : NSObject

@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSString *draftArticleListID;
@property (readonly, nonatomic) NSString *draftIssueListID;
@property (retain, nonatomic) FCInterestToken *interestToken; // ivar: _interestToken
@property (readonly, nonatomic) BOOL isAllowedToSeeDrafts;
@property (retain, nonatomic) NTPBChannelMembershipRecord *record; // ivar: _record


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithRecord:(id)arg0 interestToken:(id)arg1 ;


@end


#endif