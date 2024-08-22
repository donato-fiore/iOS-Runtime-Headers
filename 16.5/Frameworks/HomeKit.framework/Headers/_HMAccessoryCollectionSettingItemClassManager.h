// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMACCESSORYCOLLECTIONSETTINGITEMCLASSMANAGER_H
#define _HMACCESSORYCOLLECTIONSETTINGITEMCLASSMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _HMAccessoryCollectionSettingItemClassManager : NSObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_classes;
}




+(id)defaultItemValueClasses;
+(id)sharedManager;
-(BOOL)hasCustomItemValueClassesForKeyPath:(id)arg0 ;
-(id)init;
-(id)itemValueClassesForKeyPath:(id)arg0 ;
-(void)removeItemValueClassesForKeyPath:(id)arg0 ;
-(void)setItemValueClasses:(id)arg0 forKeyPath:(id)arg1 ;


@end


#endif