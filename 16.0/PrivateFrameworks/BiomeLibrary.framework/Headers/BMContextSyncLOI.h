// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMCONTEXTSYNCLOI_H
#define BMCONTEXTSYNCLOI_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMContextSyncLOI : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *ID; // ivar: _ID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceUUID; // ivar: _deviceUUID
@property (nonatomic) BOOL hasStarting; // ivar: _hasStarting
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int placeType; // ivar: _placeType
@property (readonly, nonatomic) BOOL starting; // ivar: _starting
@property (readonly) Class superclass;
@property (readonly, nonatomic) int userSpecificPlaceType; // ivar: _userSpecificPlaceType


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithID:(id)arg0 deviceUUID:(id)arg1 starting:(id)arg2 userSpecificPlaceType:(int)arg3 placeType:(int)arg4 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif