// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPREDICTIONUSERCONTEXT_H
#define ATXPREDICTIONUSERCONTEXT_H

@class NSString, NSDate;


#import "ATXPredictionContextDomain.h"

@interface ATXPredictionUserContext : ATXPredictionContextDomain {
    CGFloat _absoluteLastUnlockDate;
    CGFloat _absoluteLastAppLaunchDate;
}


@property (readonly, nonatomic) NSString *lastAppActionLaunch; // ivar: _lastAppActionLaunch
@property (readonly, nonatomic) NSString *lastAppLaunch; // ivar: _lastAppLaunch
@property (readonly, nonatomic) NSDate *lastAppLaunchDate;
@property (readonly, nonatomic) NSDate *lastUnlockDate;
@property (readonly, nonatomic) NSString *secondMostRecentAppLaunch; // ivar: _secondMostRecentAppLaunch


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPredictionUserContext:(id)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)initWithLastUnlockDate:(id)arg0 lastAppLaunch:(id)arg1 lastAppLaunchDate:(id)arg2 secondMostRecentAppLaunch:(id)arg3 lastAppActionLaunch:(id)arg4 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonDict;
-(id)proto;


@end


#endif