// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMDPAIRINGLOCKREGISTERRESPONSEINFO_H
#define FMDPAIRINGLOCKREGISTERRESPONSEINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDPairingLockRegisterResponseInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *pairingToken; // ivar: _pairingToken
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif