// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKLEADERBOARDSCORERANGEREQUEST_H
#define GKLEADERBOARDSCORERANGEREQUEST_H



#import "GKLeaderboardScoreRequest.h"

@interface GKLeaderboardScoreRangeRequest : GKLeaderboardScoreRequest

@property (nonatomic) _NSRange range; // ivar: _range


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif