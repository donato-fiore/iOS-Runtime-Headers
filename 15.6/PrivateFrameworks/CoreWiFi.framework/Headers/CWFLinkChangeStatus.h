// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFLINKCHANGESTATUS_H
#define CWFLINKCHANGESTATUS_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFLinkChangeStatus : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) float CCA; // ivar: _CCA
@property (nonatomic) NSInteger RSSI; // ivar: _RSSI
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic, getter=isInvoluntaryLinkDown) BOOL involuntaryLinkDown; // ivar: _involuntaryLinkDown
@property (nonatomic, getter=isLinkDown) BOOL linkDown; // ivar: _linkDown
@property (nonatomic) NSInteger noise; // ivar: _noise
@property (nonatomic) int reason; // ivar: _reason
@property (nonatomic) NSInteger subreason; // ivar: _subreason
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLinkChangeStatus:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif