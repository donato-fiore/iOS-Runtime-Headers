// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMLOCATIONHASHEDCOORDINATES_H
#define BMLOCATIONHASHEDCOORDINATES_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMLocationHashedCoordinates : BMEventBase <BMStoreData>



@property (readonly, nonatomic) int altitudeBucket; // ivar: _altitudeBucket
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat distanceFromGymOfCurrentLocationInMeters; // ivar: _distanceFromGymOfCurrentLocationInMeters
@property (readonly, nonatomic) CGFloat distanceFromHomeOfCurrentLocationInMeters; // ivar: _distanceFromHomeOfCurrentLocationInMeters
@property (readonly, nonatomic) CGFloat distanceFromSchoolOfCurrentLocationInMeters; // ivar: _distanceFromSchoolOfCurrentLocationInMeters
@property (readonly, nonatomic) CGFloat distanceFromWorkOfCurrentLocationInMeters; // ivar: _distanceFromWorkOfCurrentLocationInMeters
@property (readonly, nonatomic) int floor; // ivar: _floor
@property (nonatomic) BOOL hasDistanceFromGymOfCurrentLocationInMeters; // ivar: _hasDistanceFromGymOfCurrentLocationInMeters
@property (nonatomic) BOOL hasDistanceFromHomeOfCurrentLocationInMeters; // ivar: _hasDistanceFromHomeOfCurrentLocationInMeters
@property (nonatomic) BOOL hasDistanceFromSchoolOfCurrentLocationInMeters; // ivar: _hasDistanceFromSchoolOfCurrentLocationInMeters
@property (nonatomic) BOOL hasDistanceFromWorkOfCurrentLocationInMeters; // ivar: _hasDistanceFromWorkOfCurrentLocationInMeters
@property (nonatomic) BOOL hasFloor; // ivar: _hasFloor
@property (nonatomic) BOOL hasLocationHashAt156Kilometers; // ivar: _hasLocationHashAt156Kilometers
@property (nonatomic) BOOL hasLocationHashAt2500Meters; // ivar: _hasLocationHashAt2500Meters
@property (nonatomic) BOOL hasLocationHashAt300Meters; // ivar: _hasLocationHashAt300Meters
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger locationHashAt156Kilometers; // ivar: _locationHashAt156Kilometers
@property (readonly, nonatomic) NSUInteger locationHashAt2500Meters; // ivar: _locationHashAt2500Meters
@property (readonly, nonatomic) NSUInteger locationHashAt300Meters; // ivar: _locationHashAt300Meters
@property (readonly, nonatomic) int speedBucket; // ivar: _speedBucket
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithLocationHashAt300Meters:(id)arg0 locationHashAt2500Meters:(id)arg1 locationHashAt156Kilometers:(id)arg2 distanceFromHomeOfCurrentLocationInMeters:(id)arg3 distanceFromWorkOfCurrentLocationInMeters:(id)arg4 distanceFromSchoolOfCurrentLocationInMeters:(id)arg5 distanceFromGymOfCurrentLocationInMeters:(id)arg6 floor:(id)arg7 speedBucket:(int)arg8 altitudeBucket:(int)arg9 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif