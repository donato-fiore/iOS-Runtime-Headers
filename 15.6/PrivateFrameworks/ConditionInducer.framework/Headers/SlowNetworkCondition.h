// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLOWNETWORKCONDITION_H
#define SLOWNETWORKCONDITION_H

@class NSString, NSDictionary;


#import "COCondition.h"
#import "SlowNetworkUtil.h"

@interface SlowNetworkCondition : COCondition

@property (retain, nonatomic) NSString *profile; // ivar: _profile
@property (retain, nonatomic) NSDictionary *profileData; // ivar: _profileData
@property (nonatomic) BOOL running; // ivar: _running
@property (retain, nonatomic) SlowNetworkUtil *util; // ivar: _util


+(id)description;
+(id)descriptionWithProfileParamsForProfile:(id)arg0 ;
-(BOOL)active;
-(BOOL)isDestructive;
-(BOOL)isInternalOnly;
-(BOOL)isNLCPrefPaneActive;
-(BOOL)setUp;
-(id)identifierName;
-(id)initWithProfile:(id)arg0 ;
-(id)userFriendlyName;
-(void)tearDown;


@end


#endif