// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTINSTALLEDPLAN_H
#define CTINSTALLEDPLAN_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTPlanIdentifier.h"
#import "CTPlanTransferAttributes.h"

@interface CTInstalledPlan : NSObject <NSSecureCoding>



@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (retain, nonatomic) CTPlanIdentifier *planID; // ivar: _planID
@property (retain, nonatomic) CTPlanTransferAttributes *transferAttributes; // ivar: _transferAttributes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)carrierName;
-(id)description;
-(id)iccid;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)phoneNumber;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif