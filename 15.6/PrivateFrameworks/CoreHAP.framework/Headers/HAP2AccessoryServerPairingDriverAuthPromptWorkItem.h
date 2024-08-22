// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2ACCESSORYSERVERPAIRINGDRIVERAUTHPROMPTWORKITEM_H
#define HAP2ACCESSORYSERVERPAIRINGDRIVERAUTHPROMPTWORKITEM_H

@class NSError;


#import "HAP2AccessoryServerPairingDriverWorkItem.h"

@interface HAP2AccessoryServerPairingDriverAuthPromptWorkItem : HAP2AccessoryServerPairingDriverWorkItem

@property (retain, nonatomic) NSError *cancelError; // ivar: _cancelError
@property (readonly, nonatomic) NSUInteger permissionType; // ivar: _permissionType


+(id)promptForType:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithPermissionType:(NSUInteger)arg0 ;
-(void)cancelWithError:(id)arg0 ;
-(void)runForPairingDriver:(id)arg0 ;


@end


#endif