// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RLMREALMNOTIFICATIONTOKEN_H
#define RLMREALMNOTIFICATIONTOKEN_H



#import "RLMNotificationToken.h"
#import "RLMRealm.h"

@interface RLMRealmNotificationToken : RLMNotificationToken

@property (copy, nonatomic) id *block; // ivar: _block
@property (retain, nonatomic) RLMRealm *realm; // ivar: _realm


-(void)dealloc;
-(void)invalidate;
-(void)suppressNextNotification;


@end


#endif