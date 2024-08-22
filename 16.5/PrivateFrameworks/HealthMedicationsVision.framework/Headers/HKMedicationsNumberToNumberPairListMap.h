// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSNUMBERTONUMBERPAIRLISTMAP_H
#define HKMEDICATIONSNUMBERTONUMBERPAIRLISTMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HKMedicationsNumberToNumberPairListMap : NSObject {
    NSMutableDictionary *_storage;
}




-(id)init;
-(void)addInteger:(NSInteger)arg0 andInteger:(NSInteger)arg1 forKey:(NSInteger)arg2 ;
-(void)enumerateIntegersForKey:(NSInteger)arg0 block:(id)arg1 ;


@end


#endif