// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCUSTOMCHARACTERISTICACTIONSUGGESTIONRESULT_H
#define HFCUSTOMCHARACTERISTICACTIONSUGGESTIONRESULT_H

@class HMCharacteristic, NSSet;

#import <Foundation/Foundation.h>


@interface HFCustomCharacteristicActionSuggestionResult : NSObject

@property (readonly, nonatomic) HMCharacteristic *characteristic; // ivar: _characteristic
@property (nonatomic) BOOL isMutuallyExclusiveAction; // ivar: _isMutuallyExclusiveAction
@property (readonly, copy, nonatomic) NSSet *matchingExistingActions; // ivar: _matchingExistingActions
@property (readonly, nonatomic) id *targetValue; // ivar: _targetValue


-(id)initWithCharacteristic:(id)arg0 targetValue:(id)arg1 matchingActions:(id)arg2 ;


@end


#endif