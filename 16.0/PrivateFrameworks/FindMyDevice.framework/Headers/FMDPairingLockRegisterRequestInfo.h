// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMDPAIRINGLOCKREGISTERREQUESTINFO_H
#define FMDPAIRINGLOCKREGISTERREQUESTINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDPairingLockRegisterRequestInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accessoryType; // ivar: _accessoryType
@property (retain, nonatomic) NSString *lostModePublicKey; // ivar: _lostModePublicKey
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif