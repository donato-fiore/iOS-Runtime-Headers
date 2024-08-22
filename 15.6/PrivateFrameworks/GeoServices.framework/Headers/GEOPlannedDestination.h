// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPLANNEDDESTINATION_H
#define GEOPLANNEDDESTINATION_H

@class NSDate, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOPlannedDestination : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *arrivalDate; // ivar: _arrivalDate
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) NSData *handle; // ivar: _handle
@property (nonatomic) int transportType; // ivar: _transportType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinate:(struct ? )arg0 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)initWithMapItemHandle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif