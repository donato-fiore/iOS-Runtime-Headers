// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSLOCKSCREENCONTENTACTION_H
#define SBSLOCKSCREENCONTENTACTION_H

@class BSAction, NSString;



@interface SBSLockScreenContentAction : BSAction

@property (readonly, nonatomic) BOOL automaticallyInvalidatesOnSecureAppUserDismissal;
@property (retain, nonatomic) id *configurationObject; // ivar: _configurationObject
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) NSUInteger secureAppType; // ivar: _secureAppType
@property (retain, nonatomic) NSString *slot; // ivar: _slot
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)initWithType:(NSUInteger)arg0 slot:(id)arg1 identifier:(id)arg2 configurationObject:(id)arg3 handler:(id)arg4 ;


@end


#endif