// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRDEVICEPAIRINGCANDIDATE_H
#define NRDEVICEPAIRINGCANDIDATE_H

@class NSUUID, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NRDevicePairingCandidate : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSUUID *cbUUID; // ivar: _cbUUID
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif