// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXMODULE_H
#define SVXMODULE_H

@class AFAnalytics, NSString, AFInstanceContext, AFPreferences;
@protocol SVXPerforming;

#import <Foundation/Foundation.h>


@interface SVXModule : NSObject

@property (readonly, nonatomic) AFAnalytics *analytics; // ivar: _analytics
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) Class instanceClass; // ivar: _instanceClass
@property (readonly, nonatomic) AFInstanceContext *instanceContext; // ivar: _instanceContext
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) NSObject<SVXPerforming> *performer; // ivar: _performer
@property (readonly, nonatomic) AFPreferences *preferences; // ivar: _preferences


-(id)description;
-(id)initWithIdentifier:(id)arg0 instanceClass:(Class)arg1 instanceContext:(id)arg2 preferences:(id)arg3 analytics:(id)arg4 performer:(id)arg5 ;


@end


#endif