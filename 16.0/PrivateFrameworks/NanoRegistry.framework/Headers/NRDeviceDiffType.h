// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRDEVICEDIFFTYPE_H
#define NRDEVICEDIFFTYPE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NRDeviceDiff.h"
#import "NRPBDeviceDiffType.h"

@interface NRDeviceDiffType : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger changeType; // ivar: _changeType
@property (readonly, nonatomic) NRDeviceDiff *diff; // ivar: _diff
@property (readonly, nonatomic) NRPBDeviceDiffType *protobuf;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDiff:(id)arg0 andChangeType:(NSUInteger)arg1 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif