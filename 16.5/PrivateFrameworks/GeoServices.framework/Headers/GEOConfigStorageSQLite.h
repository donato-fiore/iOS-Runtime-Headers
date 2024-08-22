// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCONFIGSTORAGESQLITE_H
#define GEOCONFIGSTORAGESQLITE_H

@protocol GEOConfigStorageExpiry;


#import "GEOConfigStorageSQLiteBase.h"

@interface GEOConfigStorageSQLite : GEOConfigStorageSQLiteBase <GEOConfigStorageExpiry>





-(BOOL)getConfigKeyExpiry:(id)arg0 date:(*id)arg1 osVersion:(*id)arg2 ;
-(BOOL)getConfigKeyIsExpired:(id)arg0 ;
-(id)_getExpiringKeyForKey:(id)arg0 ;
-(id)_instanceSpecificGetKey:(id)arg0 ;
-(id)_instanceSpecificGetKeyPath:(id)arg0 ;
-(id)getAllExpiringKeys;
-(void)_instanceSpecificSetValue:(id)arg0 forKey:(id)arg1 ;
-(void)clearConfigKeyExpiry:(id)arg0 ;
-(void)setConfigKeyExpiry:(id)arg0 date:(id)arg1 osVersion:(id)arg2 ;


@end


#endif