// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMDPAIRINGLOCKUPDATEREQUESTINFO_H
#define FMDPAIRINGLOCKUPDATEREQUESTINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMDPairingLockUpdateRequestInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *lostModePubKey; // ivar: _lostModePubKey
@property (retain, nonatomic) NSString *pairingCheckToken; // ivar: _pairingCheckToken
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (retain, nonatomic) NSString *timeStamp; // ivar: _timeStamp
@property (retain, nonatomic) NSString *userPrivateKey; // ivar: _userPrivateKey


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif