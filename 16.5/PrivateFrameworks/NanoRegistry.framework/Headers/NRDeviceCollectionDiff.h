// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRDEVICECOLLECTIONDIFF_H
#define NRDEVICECOLLECTIONDIFF_H

@class NSDictionary;
@protocol NSFastEnumeration;


#import "NRDiffBase.h"
#import "NRPBDeviceCollectionDiff.h"

@interface NRDeviceCollectionDiff : NRDiffBase <NSFastEnumeration>

 {
    NSDictionary *_diffDeviceDiffs;
}


@property (readonly, nonatomic) NRPBDeviceCollectionDiff *protobuf;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)allPairingIDs;
-(id)description;
-(id)diffCollectionDiffForPairingID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceCollectionDiffDeviceDiffs:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif