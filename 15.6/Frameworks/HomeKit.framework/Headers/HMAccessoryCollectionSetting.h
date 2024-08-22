// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYCOLLECTIONSETTING_H
#define HMACCESSORYCOLLECTIONSETTING_H

@class NSSet;
@protocol NSFastEnumeration;


#import "HMAccessorySetting.h"

@interface HMAccessoryCollectionSetting : HMAccessorySetting <NSFastEnumeration>



@property (readonly, copy) NSSet *itemValueClasses;


+(id)itemValueClassesForKeyPath:(id)arg0 ;
+(void)removeItemValueClassesForKeyPath:(id)arg0 ;
+(void)setItemValueClass:(Class)arg0 forKeyPath:(id)arg1 ;
-(Class)valueClass;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithInternal:(id)arg0 ;
-(id)initWithKey:(id)arg0 properties:(NSUInteger)arg1 value:(id)arg2 ;
-(id)value;
-(void)_setting:(id)arg0 didAddConstraint:(id)arg1 ;
-(void)_setting:(id)arg0 didRemoveConstraint:(id)arg1 ;
-(void)addItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)replaceItem:(id)arg0 withItem:(id)arg1 completionHandler:(id)arg2 ;
-(void)replaceItems:(id)arg0 withItems:(id)arg1 completionHandler:(id)arg2 ;
-(void)setItemValueClass:(Class)arg0 ;
-(void)updateValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif