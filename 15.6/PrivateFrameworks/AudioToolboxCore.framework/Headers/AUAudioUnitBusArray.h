// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUAUDIOUNITBUSARRAY_H
#define AUAUDIOUNITBUSARRAY_H

@class NSMutableArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "AUAudioUnit.h"

@interface AUAudioUnitBusArray : NSObject <NSFastEnumeration>

 {
    NSMutableArray *_busses;
    ? _observers;
}


@property (readonly, nonatomic) NSInteger busType; // ivar: _busType
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic, getter=isCountChangeable) BOOL countChangeable; // ivar: _countChangeable
@property ? observers;
@property (readonly, nonatomic) AUAudioUnit *ownerAudioUnit; // ivar: _ownerAudioUnit


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithAudioUnit:(id)arg0 busType:(NSInteger)arg1 ;
-(id)initWithAudioUnit:(id)arg0 busType:(NSInteger)arg1 busses:(id)arg2 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(void)addObserverToAllBusses:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)removeObserverFromAllBusses:(id)arg0 forKeyPath:(id)arg1 context:(*void)arg2 ;
-(void)replaceBusses:(id)arg0 ;


@end


#endif