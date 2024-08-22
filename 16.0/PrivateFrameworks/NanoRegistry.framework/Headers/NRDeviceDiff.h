// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRDEVICEDIFF_H
#define NRDEVICEDIFF_H

@class NSDictionary;
@protocol NSFastEnumeration;


#import "NRDiffBase.h"
#import "NRPBDeviceDiff.h"

@interface NRDeviceDiff : NRDiffBase <NSFastEnumeration>

 {
    NSDictionary *_diffPropertyDiffs;
}


@property (readonly, nonatomic) NRPBDeviceDiff *protobuf;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)allPropertyNames;
-(id)description;
-(id)diffPropertyDiffForName:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDiffPropertyDiffs:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif