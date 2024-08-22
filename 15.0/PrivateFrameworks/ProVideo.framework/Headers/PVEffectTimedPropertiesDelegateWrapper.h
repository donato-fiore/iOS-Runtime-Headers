// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVEFFECTTIMEDPROPERTIESDELEGATEWRAPPER_H
#define PVEFFECTTIMEDPROPERTIESDELEGATEWRAPPER_H

@class NSArray, NSDictionary;
@protocol PVEffectTimedPropertiesDelegate;

#import <Foundation/Foundation.h>


@interface PVEffectTimedPropertiesDelegateWrapper : NSObject

@property (retain, nonatomic) NSArray *supportedTimedPropertyGroups; // ivar: _supportedTimedPropertyGroups
@property (weak, nonatomic) NSObject<PVEffectTimedPropertiesDelegate> *timedPropertiesDelegate; // ivar: _timedPropertiesDelegate
@property (retain, nonatomic) NSDictionary *userContext; // ivar: _userContext
@property (nonatomic) BOOL wantsStartStopNotifications; // ivar: _wantsStartStopNotifications


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithTimedPropertiesDelegate:(id)arg0 supportedTimedPropertyGroups:(id)arg1 userContext:(id)arg2 ;


@end


#endif