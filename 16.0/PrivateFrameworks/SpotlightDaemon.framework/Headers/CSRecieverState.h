// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSRECIEVERSTATE_H
#define CSRECIEVERSTATE_H

@class NSSet, CSReceiverPreferences;

#import <Foundation/Foundation.h>


@interface CSRecieverState : NSObject

@property (readonly, nonatomic) NSSet *disabledBundleIdentifiers; // ivar: _disabledBundleIdentifiers
@property (readonly, nonatomic) NSSet *enabledBundleIdentifiers; // ivar: _enabledBundleIdentifiers
@property (readonly, nonatomic) int notifyToken; // ivar: _notifyToken
@property (readonly, nonatomic) CSReceiverPreferences *receiverPreferences; // ivar: _receiverPreferences


+(id)sharedInstance;
-(BOOL)checkBundleIdentifier:(id)arg0 ;
-(id)init;
-(void)_updateFromPreferences;


@end


#endif