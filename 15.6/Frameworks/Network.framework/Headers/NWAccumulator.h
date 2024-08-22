// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWACCUMULATOR_H
#define NWACCUMULATOR_H

@class NSMutableArray, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "NWAccumulator.h"

@interface NWAccumulator : NSObject {
    os_unfair_lock_s _lock;
    os_unfair_lock_s _kvo_lock;
}


@property (retain, nonatomic) NSMutableArray *accumulatedValues; // ivar: _accumulatedValues
@property (readonly, nonatomic) NSArray *accumulations;
@property (retain, nonatomic) NWAccumulator *lastSnapshot; // ivar: _lastSnapshot
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)accumulatedValueForObject:(id)arg0 andKeyPath:(id)arg1 ;
-(id)awdAccumulator;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithName:(id)arg0 ;
-(id)snapshot;
-(void)addAccumulation:(id)arg0 forKey:(id)arg1 stateCallback:(id)arg2 ;
-(void)addAccumulation:(id)arg0 withName:(id)arg1 forKey:(id)arg2 stateCallback:(id)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerObserverForKeyPath:(id)arg0 ofObject:(id)arg1 alreadyRegistered:(BOOL)arg2 ;
-(void)reset;


@end


#endif