// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REELEMENTUSERACTIVITYACTION_H
#define REELEMENTUSERACTIVITYACTION_H

@class NSString, NSUserActivity;


#import "REElementAction.h"

@interface REElementUserActivityAction : REElementAction

@property (readonly, nonatomic) NSString *applicationID; // ivar: _applicationID
@property (readonly, copy, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithUserActivity:(id)arg0 applicationID:(id)arg1 ;
-(void)_performWithContext:(id)arg0 ;
-(void)_submitMetricsWithSuccess:(BOOL)arg0 ;


@end


#endif