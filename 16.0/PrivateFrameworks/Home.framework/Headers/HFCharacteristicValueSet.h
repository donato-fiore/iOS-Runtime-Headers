// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCHARACTERISTICVALUESET_H
#define HFCHARACTERISTICVALUESET_H

@class NSMutableDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface HFCharacteristicValueSet : NSObject {
    NSMutableDictionary *_valuesByCharacteristicUUID;
}


@property (readonly, nonatomic) NSSet *allCharacteristics; // ivar: _allCharacteristics


-(id)init;
-(id)valueForCharacteristic:(id)arg0 ;
-(void)removeValueForCharacteristic:(id)arg0 ;
-(void)setValue:(id)arg0 forCharacteristic:(id)arg1 ;


@end


#endif