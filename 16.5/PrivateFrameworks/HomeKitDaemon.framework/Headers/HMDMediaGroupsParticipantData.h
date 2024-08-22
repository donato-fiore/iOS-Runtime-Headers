// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIAGROUPSPARTICIPANTDATA_H
#define HMDMEDIAGROUPSPARTICIPANTDATA_H

@class NSArray, HMMediaDestination, HMMediaDestinationControllerData;
@protocol HMEProtoBufferCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HMDMediaGroupsParticipantData : NSObject <HMEProtoBufferCoding, NSCopying, NSMutableCopying>



@property (copy) NSArray *backedUpGroups; // ivar: _backedUpGroups
@property (copy) HMMediaDestination *destination; // ivar: _destination
@property (copy) HMMediaDestinationControllerData *destinationControllerData; // ivar: _destinationControllerData


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeToProtoBufferData;
-(id)initWithDestination:(id)arg0 destinationControllerData:(id)arg1 backedUpGroups:(id)arg2 ;
-(id)initWithProtoBufferData:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif