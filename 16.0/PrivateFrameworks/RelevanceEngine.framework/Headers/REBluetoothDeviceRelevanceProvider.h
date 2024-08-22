// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REBLUETOOTHDEVICERELEVANCEPROVIDER_H
#define REBLUETOOTHDEVICERELEVANCEPROVIDER_H



#import "RERelevanceProvider.h"

@interface REBluetoothDeviceRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) BOOL connectedToCar; // ivar: _connectedToCar
@property (readonly, nonatomic) BOOL connectedToSpeaker; // ivar: _connectedToSpeaker


+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)initWithConnectionToCar:(BOOL)arg0 connectionToSpeaker:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif