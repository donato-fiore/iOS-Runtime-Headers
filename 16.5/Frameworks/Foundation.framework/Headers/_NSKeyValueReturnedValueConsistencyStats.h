// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSKEYVALUERETURNEDVALUECONSISTENCYSTATS_H
#define _NSKEYVALUERETURNEDVALUECONSISTENCYSTATS_H


#import <Foundation/Foundation.h>

#import "_NSKeyValueObjectAndKeyPair.h"

@interface _NSKeyValueReturnedValueConsistencyStats : NSObject {
    _NSKeyValueObjectAndKeyPair *_pair;
    BOOL _capturedInitialValue;
    id *_weakCurrentValue;
    id *_copiedCurrentValue;
    NSInteger _checkCount;
}




-(id)currentValue;
-(void)dealloc;
-(void)setCurrentValue:(id)arg0 ;


@end


#endif