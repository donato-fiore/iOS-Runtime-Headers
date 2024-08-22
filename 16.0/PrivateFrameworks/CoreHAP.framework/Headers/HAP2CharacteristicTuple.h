// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2CHARACTERISTICTUPLE_H
#define HAP2CHARACTERISTICTUPLE_H

@class NSMutableArray;
@protocol HAP2Accessory;

#import <Foundation/Foundation.h>


@interface HAP2CharacteristicTuple : NSObject

@property (readonly, nonatomic) NSObject<HAP2Accessory> *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSMutableArray *values; // ivar: _values


-(id)initWithAccessory:(id)arg0 ;


@end


#endif