// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEHOTSPOTNETWORK_H
#define NEHOTSPOTNETWORK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NEHotspotNetwork : NSObject {
    *__CNNetwork _network;
}


@property (readonly) NSString *BSSID;
@property (readonly) NSString *SSID;
@property NSInteger securityType; // ivar: _securityType


+(void)fetchCurrentWithCompletionHandler:(id)arg0 ;
-(BOOL)didAutoJoin;
-(BOOL)didJustJoin;
-(BOOL)isChosenHelper;
-(BOOL)isSecure;
-(CGFloat)signalStrength;
-(id)description;
-(void)dealloc;
-(void)setConfidence:(NSInteger)arg0 ;
-(void)setPassword:(id)arg0 ;


@end


#endif