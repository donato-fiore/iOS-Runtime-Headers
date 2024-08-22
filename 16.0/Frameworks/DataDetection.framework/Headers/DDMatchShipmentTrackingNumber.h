// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDMATCHSHIPMENTTRACKINGNUMBER_H
#define DDMATCHSHIPMENTTRACKINGNUMBER_H

@class NSString;


#import "DDMatch.h"

@interface DDMatchShipmentTrackingNumber : DDMatch

@property (readonly, nonatomic) NSString *carrier; // ivar: _carrier
@property (readonly, nonatomic) NSString *trackingNumber; // ivar: _trackingNumber


-(id)initWithDDScannerResult:(id)arg0 ;


@end


#endif