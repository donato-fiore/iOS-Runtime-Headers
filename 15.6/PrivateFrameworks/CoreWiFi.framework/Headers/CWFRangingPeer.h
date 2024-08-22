// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFRANGINGPEER_H
#define CWFRANGINGPEER_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFRangingPeer : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *MACAddress; // ivar: _MACAddress
@property (copy, nonatomic) NSData *PMK; // ivar: _PMK
@property (copy, nonatomic) NSData *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger numberOfMeasurements; // ivar: _numberOfMeasurements
@property (nonatomic) BOOL useCoreRotation; // ivar: _useCoreRotation


+(BOOL)supportsSecureCoding;
+(id)rangingPeerWithMACAddress:(id)arg0 PMK:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRangingPeer:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif