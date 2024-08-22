// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKFELICASHINKANSENTRAIN_H
#define PKFELICASHINKANSENTRAIN_H

@class NSNumber, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKFelicaShinkansenTrain : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *arrivalTime; // ivar: _arrivalTime
@property (readonly, copy, nonatomic) NSNumber *carNumber; // ivar: _carNumber
@property (readonly, copy, nonatomic) NSNumber *departureTime; // ivar: _departureTime
@property (readonly, copy, nonatomic) NSData *destinationStation; // ivar: _destinationStation
@property (readonly, copy, nonatomic) NSData *originStation; // ivar: _originStation
@property (readonly, copy, nonatomic) NSNumber *seatNumber; // ivar: _seatNumber
@property (readonly, copy, nonatomic) NSNumber *seatRow; // ivar: _seatRow
@property (readonly, copy, nonatomic) NSString *trainName; // ivar: _trainName


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif