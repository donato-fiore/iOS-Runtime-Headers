// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPUSAGEREPORT_H
#define NPUSAGEREPORT_H

@class NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NPUsageReport : NSObject <NSSecureCoding>



@property (nonatomic) unsigned char addressFamily; // ivar: _addressFamily
@property (retain, nonatomic) NSUUID *dayPassUUID; // ivar: _dayPassUUID
@property (nonatomic) unsigned int edgeIndex; // ivar: _edgeIndex
@property (readonly, nonatomic) NSInteger fallbackReason; // ivar: _fallbackReason
@property (retain, nonatomic) NSString *geohash; // ivar: _geohash
@property (nonatomic) unsigned int keybagGeneration; // ivar: _keybagGeneration
@property (nonatomic) NSUInteger rtt; // ivar: _rtt
@property (readonly, nonatomic) NSString *signingIdentifier; // ivar: _signingIdentifier
@property (nonatomic) unsigned int waldoTimestamp; // ivar: _waldoTimestamp


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSigningIdentifier:(id)arg0 fallbackReason:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif