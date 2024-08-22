// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WPZONETRACKINGREQUEST_H
#define WPZONETRACKINGREQUEST_H

@class NSMutableSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WPZoneTrackingRequest : NSObject <NSSecureCoding>



@property unsigned char clientType; // ivar: _clientType
@property BOOL scanWhenScreenOff; // ivar: _scanWhenScreenOff
@property ? scanningRates; // ivar: _scanningRates
@property (retain) NSMutableSet *zones; // ivar: _zones


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif