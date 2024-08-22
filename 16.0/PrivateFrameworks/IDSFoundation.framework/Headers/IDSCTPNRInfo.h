// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSCTPNRINFO_H
#define IDSCTPNRINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IDSCTPNRInfo : NSObject

@property (retain, nonatomic) NSString *IMSI; // ivar: _IMSI
@property (retain, nonatomic) NSString *PLMN; // ivar: _PLMN
@property (retain, nonatomic) NSString *PNRPhoneNumber; // ivar: _PNRPhoneNumber
@property (retain, nonatomic) NSString *phoneBookNumber; // ivar: _phoneBookNumber


-(id)initWithIMSI:(id)arg0 PLMN:(id)arg1 PNRPhoneNumber:(id)arg2 phoneBookNumber:(id)arg3 ;


@end


#endif