// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3ACCOUNTCACHEDATABASE_H
#define ML3ACCOUNTCACHEDATABASE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ML3MusicLibrary.h"

@interface ML3AccountCacheDatabase : NSObject {
    NSMutableDictionary *_propertiesCache;
    NSObject<OS_dispatch_queue> *accessQueue;
    ML3MusicLibrary *_library;
}




-(BOOL)getPropertiesForDSID:(NSUInteger)arg0 appleID:(*id)arg1 altDSID:(*id)arg2 ;
-(BOOL)setAppleID:(id)arg0 altDSID:(id)arg1 forDSID:(NSUInteger)arg2 ;
-(BOOL)setAppleID:(id)arg0 forDSID:(NSUInteger)arg1 ;
-(id)_cacheEntryForDSID:(NSUInteger)arg0 ;
-(id)appleIDForDSID:(NSUInteger)arg0 ;
-(id)initWithLibrary:(id)arg0 ;
-(void)_setCacheEntry:(id)arg0 forDSID:(NSUInteger)arg1 ;


@end


#endif