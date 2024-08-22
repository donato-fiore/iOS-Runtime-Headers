// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFREMOTEHOTSPOTCELLULARBEARERPARAMS_H
#define SFREMOTEHOTSPOTCELLULARBEARERPARAMS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFRemoteHotspotCellularBearerParams : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *destIPAddress; // ivar: _destIPAddress
@property (nonatomic) unsigned short destPort; // ivar: _destPort
@property (nonatomic) unsigned short ipProtocol; // ivar: _ipProtocol
@property (copy, nonatomic) NSString *srcIPAddress; // ivar: _srcIPAddress
@property (nonatomic) unsigned short srcPort; // ivar: _srcPort
@property (copy, nonatomic) NSString *trafficClass; // ivar: _trafficClass


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif