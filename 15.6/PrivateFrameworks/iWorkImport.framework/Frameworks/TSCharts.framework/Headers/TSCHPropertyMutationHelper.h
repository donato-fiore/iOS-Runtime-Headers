// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHPROPERTYMUTATIONHELPER_H
#define TSCHPROPERTYMUTATIONHELPER_H


#import <Foundation/Foundation.h>


@interface TSCHPropertyMutationHelper : NSObject



+(id)convertToStyleSwapTuplesForStyleOwner:(id)arg0 styleSwapType:(int)arg1 nonStyleSwapType:(int)arg2 index:(NSUInteger)arg3 fromMutations:(id)arg4 forImport:(BOOL)arg5 withOptionalStyleValueConversionBlock:(id)arg6 ;
+(id)styleSwapTuplesFromMutationTuples:(id)arg0 forImport:(BOOL)arg1 ;
+(int)safe_specificMutationPropertyForGeneric:(int)arg0 styleOwner:(id)arg1 allowSpecificProperties:(BOOL)arg2 ;
+(int)specificMutationPropertyForGeneric:(int)arg0 styleOwner:(id)arg1 allowSpecificProperties:(BOOL)arg2 ;
+(void)applyMutations:(id)arg0 forImport:(BOOL)arg1 forStyleOwner:(id)arg2 withNonStylePropertyList:(id)arg3 toStylePropertyMap:(id)arg4 andNonStylePropertyMap:(id)arg5 ;
+(void)setValue:(id)arg0 forProperty:(int)arg1 ofStyleOwner:(id)arg2 ;
-(id)init;


@end


#endif