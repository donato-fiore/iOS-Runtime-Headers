// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTCELLULARPLANPROVISIONINGREQUEST_H
#define CTCELLULARPLANPROVISIONINGREQUEST_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCellularPlanProvisioningRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *EID; // ivar: _EID
@property (retain, nonatomic) NSString *ICCID; // ivar: _ICCID
@property (retain, nonatomic) NSString *OID; // ivar: _OID
@property (retain, nonatomic) NSString *address; // ivar: _address
@property (retain, nonatomic) NSString *confirmationCode; // ivar: _confirmationCode
@property (retain, nonatomic) NSString *matchingID; // ivar: _matchingID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif