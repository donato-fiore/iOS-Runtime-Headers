// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCELLULARPLANPENDINGTRANSFER_H
#define CTCELLULARPLANPENDINGTRANSFER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTUserLabel.h"

@interface CTCellularPlanPendingTransfer : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (retain, nonatomic) CTUserLabel *planLabel; // ivar: _planLabel
@property (retain, nonatomic) NSString *sourceIccid; // ivar: _sourceIccid
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif