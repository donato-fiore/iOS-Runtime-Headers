// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSSUGGESTIONLRINPUT_H
#define ATXNOTIFICATIONSSUGGESTIONLRINPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface ATXNotificationsSuggestionLRInput : NSObject <MLFeatureProvider>



@property (nonatomic) CGFloat appPopularity; // ivar: _appPopularity
@property (nonatomic) CGFloat app_bias; // ivar: _app_bias
@property (nonatomic) CGFloat cleared; // ivar: _cleared
@property (nonatomic) CGFloat defaultActions; // ivar: _defaultActions
@property (nonatomic) CGFloat engage_rate; // ivar: _engage_rate
@property (nonatomic) CGFloat engaged; // ivar: _engaged
@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) CGFloat ignored; // ivar: _ignored
@property (nonatomic) CGFloat orbs; // ivar: _orbs
@property (nonatomic) CGFloat received; // ivar: _received
@property (nonatomic) CGFloat suppActions; // ivar: _suppActions
@property (nonatomic) CGFloat tapCoalesce; // ivar: _tapCoalesce
@property (nonatomic) CGFloat totalLaunches; // ivar: _totalLaunches


-(id)featureValueForName:(id)arg0 ;
-(id)initWithAppPopularity:(CGFloat)arg0 totalLaunches:(CGFloat)arg1 received:(CGFloat)arg2 ignored:(CGFloat)arg3 cleared:(CGFloat)arg4 engaged:(CGFloat)arg5 defaultActions:(CGFloat)arg6 orbs:(CGFloat)arg7 suppActions:(CGFloat)arg8 tapCoalesce:(CGFloat)arg9 engage_rate:(CGFloat)arg10 app_bias:(CGFloat)arg11 ;


@end


#endif