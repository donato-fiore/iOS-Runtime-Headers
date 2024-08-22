// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDEVICEPLUGGEDIN_H
#define BMDEVICEPLUGGEDIN_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMDevicePluggedIn : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSInteger adapterType; // ivar: _adapterType
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAdapterType; // ivar: _hasAdapterType
@property (nonatomic) BOOL hasStarting; // ivar: _hasStarting
@property (nonatomic) BOOL hasWireless; // ivar: _hasWireless
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL starting; // ivar: _starting
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wireless; // ivar: _wireless


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithStarting:(id)arg0 wireless:(id)arg1 adapterType:(id)arg2 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif