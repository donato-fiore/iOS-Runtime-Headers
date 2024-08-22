// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDEVICEBATTERYLEVEL_H
#define BMDEVICEBATTERYLEVEL_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMDeviceBatteryLevel : BMEventBase <BMStoreData>



@property (readonly, nonatomic) CGFloat batteryPercentage; // ivar: _batteryPercentage
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL fullyCharged; // ivar: _fullyCharged
@property (nonatomic) BOOL hasBatteryPercentage; // ivar: _hasBatteryPercentage
@property (nonatomic) BOOL hasFullyCharged; // ivar: _hasFullyCharged
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithBatteryPercentage:(id)arg0 fullyCharged:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif