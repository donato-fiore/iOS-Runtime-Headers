// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONSOUND_H
#define NCNOTIFICATIONSOUND_H

@class TLAlertConfiguration, NSDictionary, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface NCNotificationSound : NSObject <BSDescriptionProviding>



@property (readonly, copy, nonatomic) TLAlertConfiguration *alertConfiguration; // ivar: _alertConfiguration
@property (readonly, copy, nonatomic) NSDictionary *controllerAttributes; // ivar: _controllerAttributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maxDuration; // ivar: _maxDuration
@property (readonly, nonatomic, getter=isRepeating) BOOL repeats; // ivar: _repeats
@property (readonly, copy, nonatomic) NSString *ringtoneName; // ivar: _ringtoneName
@property (readonly, copy, nonatomic) NSString *songPath; // ivar: _songPath
@property (readonly, nonatomic) NSUInteger soundBehavior; // ivar: _soundBehavior
@property (readonly, nonatomic) NSInteger soundType; // ivar: _soundType
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int systemSoundID; // ivar: _systemSoundID
@property (readonly, copy, nonatomic) NSDictionary *vibrationPattern; // ivar: _vibrationPattern


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithNotificationSound:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif