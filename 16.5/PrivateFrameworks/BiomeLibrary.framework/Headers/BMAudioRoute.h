// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMAUDIOROUTE_H
#define BMAUDIOROUTE_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMAudioRoute : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL external; // ivar: _external
@property (nonatomic) BOOL hasExternal; // ivar: _hasExternal
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *portName; // ivar: _portName
@property (readonly, nonatomic) NSString *portType; // ivar: _portType
@property (readonly, nonatomic) int routeChangeReason; // ivar: _routeChangeReason
@property (readonly) Class superclass;
@property (readonly, nonatomic) int type; // ivar: _type


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithExternal:(id)arg0 identifier:(id)arg1 portType:(id)arg2 portName:(id)arg3 routeChangeReason:(int)arg4 type:(int)arg5 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif