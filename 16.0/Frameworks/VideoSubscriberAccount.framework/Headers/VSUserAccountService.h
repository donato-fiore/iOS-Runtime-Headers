// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSUSERACCOUNTSERVICE_H
#define VSUSERACCOUNTSERVICE_H



#import "VSServiceListener.h"
#import "VSPreferences.h"
#import "VSUserAccountRegistry.h"

@interface VSUserAccountService : VSServiceListener

@property (retain, nonatomic) VSPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) VSUserAccountRegistry *registry; // ivar: _registry


-(id)_securityTaskForCurrentConnection;
-(id)init;
-(void)performMigrationWithCompletion:(id)arg0 ;


@end


#endif