// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACDKEYCHAINITEM_H
#define ACDKEYCHAINITEM_H

@class NSMutableDictionary, NSMutableSet, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface ACDKeychainItem : NSObject {
    NSMutableDictionary *_properties;
    NSMutableSet *_dirtyProperties;
}


@property (copy, nonatomic) NSString *accessGroup;
@property (copy, nonatomic) NSString *accessibility;
@property (copy, nonatomic) NSString *account;
@property (readonly, nonatomic) BOOL hasCustomAccessControl;
@property (copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) *__CFData persistentRef; // ivar: _persistentRef
@property (copy, nonatomic) NSString *service;
@property (nonatomic) BOOL synchronizable;
@property (readonly, nonatomic) BOOL useDataProtectionKeychain;
@property (nonatomic) NSInteger version;


+(id)new;
-(BOOL)save:(*id)arg0 ;
-(id)_metadataWithError:(*id)arg0 ;
-(id)_modifiedProperties;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithPersistentRef:(struct __CFData *)arg0 ;
-(id)initWithPersistentRef:(struct __CFData *)arg0 properties:(id)arg1 ;
-(void)_clearDirtyProperties;
-(void)_markPropertyDirty:(id)arg0 ;
-(void)_reloadProperties;
-(void)_setValue:(id)arg0 forProperty:(id)arg1 ;
-(void)dealloc;
-(void)migrateToKeyBagFromLegacy;
-(void)reload;


@end


#endif