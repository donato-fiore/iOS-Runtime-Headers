// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CLMICROLOCATIONCLUSTERIDANDCLUSTERDATA_H
#define _CLMICROLOCATIONCLUSTERIDANDCLUSTERDATA_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CLMicroLocationClusterIdAndClusterData : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *clusterIdentifier; // ivar: _clusterIdentifier
@property (readonly, nonatomic) CGFloat meanBLEReceivedSignalStrength; // ivar: _meanBLEReceivedSignalStrength
@property (readonly, nonatomic) CGFloat meanUWBRange; // ivar: _meanUWBRange


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClusterIdentifier:(id)arg0 meanBleRssi:(CGFloat)arg1 meanUwbRange:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif