// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISETTINGVALUESTORE_H
#define SKUISETTINGVALUESTORE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SKUISettingValueStore : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSMutableDictionary *_originalValues;
    NSMutableDictionary *_modifiedValues;
}




-(BOOL)hasChanges;
-(id)init;
-(id)modifiedKeys;
-(id)originalValueForKey:(id)arg0 ;
-(id)resolvedValueForKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)clearValueForKey:(id)arg0 ;
-(void)commitChanges;
-(void)discardChanges;
-(void)setModifiedValue:(id)arg0 forKey:(id)arg1 ;
-(void)setOriginalValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif