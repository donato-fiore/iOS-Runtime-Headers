// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPDICTIONARYDIFF_H
#define HKSPDICTIONARYDIFF_H

@class NSSet, NSDictionary;

#import <Foundation/Foundation.h>


@interface HKSPDictionaryDiff : NSObject

@property (readonly, nonatomic) BOOL equalDictionaries;
@property (readonly, nonatomic) NSSet *removedKeys; // ivar: _removedKeys
@property (readonly, nonatomic) NSDictionary *updatedProperties; // ivar: _updatedProperties


-(id)initWithOriginalDictionary:(id)arg0 updatedDictionary:(id)arg1 keysToDiff:(id)arg2 ;


@end


#endif