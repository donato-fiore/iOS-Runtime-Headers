// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALMOCKPREFERENCESTORE_H
#define CALMOCKPREFERENCESTORE_H

@class NSMutableDictionary, NSString;
@protocol CalPreferencesStore;

#import <Foundation/Foundation.h>


@interface CalMockPreferenceStore : NSObject <CalPreferencesStore>

 {
    NSMutableDictionary *_keys;
    NSMutableDictionary *_values;
    NSString *_path;
    os_unfair_lock_s _lock;
}




+(id)decodeKeysDictionary:(id)arg0 ;
+(id)encodeKeysDictionary:(id)arg0 ;
+(id)inMemoryStore;
+(id)preferencesStoreForPath:(id)arg0 ;
+(id)storagePathForDirectory:(id)arg0 ;
-(BOOL)_getValue:(*id)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(BOOL)getBoolean:(*BOOL)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(BOOL)getInteger:(*NSInteger)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(BOOL)getValue:(*id)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)_setValue:(id)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(void)setValue:(id)arg0 forDomain:(id)arg1 key:(id)arg2 ;
-(void)synchronizeDomain:(id)arg0 ;


@end


#endif