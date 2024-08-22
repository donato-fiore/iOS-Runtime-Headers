// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCELLULARCARRIERDISCLOSUREWARNING_H
#define WFCELLULARCARRIERDISCLOSUREWARNING_H

@class NSString;


#import "WFDisclosureWarning.h"

@interface WFCellularCarrierDisclosureWarning : WFDisclosureWarning

@property (readonly, nonatomic) NSString *displayedCarrierName; // ivar: _displayedCarrierName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayedCarrierName:(id)arg0 ;
-(id)localizedMessage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif