// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTDATACONNECTIONSTATUS_H
#define CTDATACONNECTIONSTATUS_H

@class NSString, NSNumber, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTDataConnectionStatus : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *apnName; // ivar: _apnName
@property (nonatomic) int contextType; // ivar: _contextType
@property (retain, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) int ipFamily; // ivar: _ipFamily
@property (retain, nonatomic) NSNumber *pdp; // ivar: _pdp
@property (nonatomic) BOOL publicNetAllowed; // ivar: _publicNetAllowed
@property (retain, nonatomic) NSArray *qosFlows; // ivar: _qosFlows
@property (nonatomic) int state; // ivar: _state
@property (nonatomic) BOOL suspended; // ivar: _suspended
@property (nonatomic) int transportType; // ivar: _transportType
@property (nonatomic) unsigned int wirelessTechnologyMask; // ivar: _wirelessTechnologyMask


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif