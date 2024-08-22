// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCONFIGSTORAGESQLITEBASE_H
#define GEOCONFIGSTORAGESQLITEBASE_H

@class NSString;
@protocol GEOConfigStorageReadWrite;

#import <Foundation/Foundation.h>

#import "GEOConfigPersistence.h"

@interface GEOConfigStorageSQLiteBase : NSObject <GEOConfigStorageReadWrite>

 {
    NSInteger _source;
    GEOConfigPersistence *_persister;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_instanceSpecificGetKey:(id)arg0 ;
-(id)_instanceSpecificGetKeyPath:(id)arg0 ;
-(id)getConfigValueForKey:(id)arg0 countryCode:(id)arg1 options:(NSUInteger)arg2 source:(*NSInteger)arg3 ;
-(void)_instanceSpecificSetValue:(id)arg0 forKey:(id)arg1 ;
-(void)resync;
-(void)setConfigValue:(id)arg0 forKey:(id)arg1 options:(NSUInteger)arg2 synchronous:(BOOL)arg3 ;


@end


#endif