// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKIDVREMOTEDEVICECREDENTIALPREFLIGHTSTATUS_H
#define NPKIDVREMOTEDEVICECREDENTIALPREFLIGHTSTATUS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NPKIDVRemoteDeviceCredentialPreflightStatus : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger credentialType; // ivar: _credentialType
@property (readonly, nonatomic) BOOL preflightSuccessful; // ivar: _preflightSuccessful
@property (readonly, nonatomic) NSUInteger provisionedPassesCount; // ivar: _provisionedPassesCount


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialType:(NSUInteger)arg0 provisionedPassesCount:(NSUInteger)arg1 preflightSuccessful:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif