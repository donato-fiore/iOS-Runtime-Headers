// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKFELICAGREENCARTICKET_H
#define PKFELICAGREENCARTICKET_H

@class NSData, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKFelicaGreenCarTicket : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *destinationStation; // ivar: _destinationStation
@property (readonly, copy, nonatomic) NSData *originStation; // ivar: _originStation
@property (readonly, nonatomic, getter=isRefunded) BOOL refunded; // ivar: _refunded
@property (readonly, copy, nonatomic) NSNumber *validityStartDate; // ivar: _validityStartDate


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif