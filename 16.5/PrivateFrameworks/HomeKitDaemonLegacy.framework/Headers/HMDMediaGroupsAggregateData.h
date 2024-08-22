// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIAGROUPSAGGREGATEDATA_H
#define HMDMEDIAGROUPSAGGREGATEDATA_H

@class NSArray;
@protocol HMEProtoBufferCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HMDMediaGroupsAggregateData : NSObject <HMEProtoBufferCoding, NSCopying, NSMutableCopying>



@property (copy) NSArray *destinationControllersData; // ivar: _destinationControllersData
@property (copy) NSArray *destinations; // ivar: _destinations
@property (copy) NSArray *groups; // ivar: _groups


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodeDestinationControllersWithEncodedDestinationControllers:(id)arg0 ;
-(id)decodeDestinationsWithEncodedDestinations:(id)arg0 ;
-(id)decodeMediaGroupsWithEncodedMediaGroups:(id)arg0 ;
-(id)description;
-(id)encodeToProtoBufferData;
-(id)encodedDestinationControllerEvents;
-(id)encodedDestinationEvents;
-(id)encodedMediaGroupEvents;
-(id)groupWithIdentifier:(id)arg0 ;
-(id)initWithDestinations:(id)arg0 destinationControllersData:(id)arg1 ;
-(id)initWithDestinations:(id)arg0 destinationControllersData:(id)arg1 groups:(id)arg2 ;
-(id)initWithProtoBufferData:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)sentinelDestination;
-(id)sentinelDestinationControllerData;
-(id)sentinelGroup;
-(id)sentinelIdentifier;


@end


#endif