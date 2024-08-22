// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDMATCHFLIGHTNUMBER_H
#define DDMATCHFLIGHTNUMBER_H

@class NSString;


#import "DDMatch.h"

@interface DDMatchFlightNumber : DDMatch

@property (readonly, nonatomic) NSString *airline; // ivar: _airline
@property (readonly, nonatomic) NSString *flightNumber; // ivar: _flightNumber


-(id)initWithDDScannerResult:(id)arg0 ;


@end


#endif