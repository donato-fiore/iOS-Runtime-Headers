// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPKEYRECONCILER_H
#define SPKEYRECONCILER_H

@class NSDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SPKeyReconciler : NSObject {
    NSDictionary *_backingDictionary;
    NSMutableArray *_keyIndices;
}




-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)reconcileKey:(id)arg0 matchedIndex:(*unsigned int)arg1 sequence:(*unsigned char)arg2 error:(*unsigned char)arg3 ;


@end


#endif