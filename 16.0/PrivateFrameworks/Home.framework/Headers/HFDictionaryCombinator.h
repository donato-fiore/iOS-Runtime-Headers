// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFDICTIONARYCOMBINATOR_H
#define HFDICTIONARYCOMBINATOR_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface HFDictionaryCombinator : NSObject

@property (copy, nonatomic) NSSet *keysToReconcile; // ivar: _keysToReconcile
@property (copy, nonatomic) NSSet *keysToSkip; // ivar: _keysToSkip


+(BOOL)_isKindOfContainerClass:(id)arg0 ;
-(id)_mergeVal1:(id)arg0 withVal2:(id)arg1 ;
-(id)combineResultDictionary:(id)arg0 withResultDictionary:(id)arg1 reconcilationHandler:(id)arg2 ;
-(void)_reconcileKey:(id)arg0 fromDictionary:(id)arg1 andDictionary:(id)arg2 intoResultDictionary:(id)arg3 withReconcilationHandler:(id)arg4 ;


@end


#endif