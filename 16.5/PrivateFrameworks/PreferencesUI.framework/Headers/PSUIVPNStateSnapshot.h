// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIVPNSTATESNAPSHOT_H
#define PSUIVPNSTATESNAPSHOT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PSUIVPNStateSnapshot : NSObject

@property (nonatomic) NSUInteger _vpnConnectivityState; // ivar: __vpnConnectivityState
@property (nonatomic) NSUInteger _vpnSettingsVisibilityStyle; // ivar: __vpnSettingsVisibilityStyle
@property (readonly, nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (readonly, copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (readonly, copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithVisibilityStyle:(NSUInteger)arg0 connectivityState:(NSUInteger)arg1 ;


@end


#endif