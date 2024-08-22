// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEHOTSPOTNETWORK_H
#define NEHOTSPOTNETWORK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NEHotspotNetwork : NSObject

@property (readonly) NSString *BSSID;
@property (readonly) NSString *SSID;
@property (readonly) NSString *interfaceName;
@property *__CNNetwork network; // ivar: _network
@property NSInteger securityType; // ivar: _securityType


+(void)fetchCurrentWithCompletionHandler:(id)arg0 ;
-(BOOL)didAutoJoin;
-(BOOL)didJustJoin;
-(BOOL)isChosenHelper;
-(BOOL)isSecure;
-(CGFloat)signalStrength;
-(id)description;
-(id)initWithNetwork:(struct __CNNetwork *)arg0 ;
-(id)initWithNetwork:(struct __CNNetwork *)arg0 securityType:(id)arg1 ;
-(void)dealloc;
-(void)setConfidence:(NSInteger)arg0 ;
-(void)setPassword:(id)arg0 ;


@end


#endif