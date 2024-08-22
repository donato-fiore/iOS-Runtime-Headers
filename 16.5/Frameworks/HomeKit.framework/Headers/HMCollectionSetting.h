// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCOLLECTIONSETTING_H
#define HMCOLLECTIONSETTING_H

@class NSSet;
@protocol NSFastEnumeration;


#import "HMSetting.h"

@interface HMCollectionSetting : HMSetting <NSFastEnumeration>



@property (readonly, copy) NSSet *itemValueClasses; // ivar: _itemValueClasses


+(id)defaultItemValueClasses;
+(id)itemValueClassesForKeyPath:(id)arg0 ;
+(void)setItemValueClass:(Class)arg0 forKeyPath:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)setItemValueClass:(Class)arg0 ;


@end


#endif