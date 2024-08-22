// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKFRIENDRECOMMENDATIONINTERNAL_H
#define GKFRIENDRECOMMENDATIONINTERNAL_H

@class NSString;


#import "GKFamiliarPlayerInternal.h"

@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal

@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSString *reason2; // ivar: _reason2
@property (nonatomic) unsigned int rid; // ivar: _rid
@property (nonatomic) int source; // ivar: _source


+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(int)defaultFamiliarity;


@end


#endif