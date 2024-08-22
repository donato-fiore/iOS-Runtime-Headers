// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBMUTABLECHARACTERISTIC_H
#define CBMUTABLECHARACTERISTIC_H

@class NSNumber, NSArray, NSData;


#import "CBCharacteristic.h"

@interface CBMutableCharacteristic : CBCharacteristic

@property (retain) NSNumber *ID; // ivar: _ID
@property (retain) NSArray *descriptors;
@property (nonatomic) NSUInteger permissions; // ivar: _permissions
@property (nonatomic) NSUInteger properties;
@property (readonly, retain) NSArray *subscribedCentrals; // ivar: _subscribedCentrals
@property (retain) NSData *value;


-(BOOL)handleCentralSubscribed:(id)arg0 ;
-(BOOL)handleCentralUnsubscribed:(id)arg0 ;
-(id)description;
-(id)initWithService:(id)arg0 dictionary:(id)arg1 ;
-(id)initWithType:(id)arg0 properties:(NSUInteger)arg1 value:(id)arg2 permissions:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)handlePowerNotOn;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif