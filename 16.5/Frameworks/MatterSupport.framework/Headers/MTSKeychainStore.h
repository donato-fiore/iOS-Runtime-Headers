// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSKEYCHAINSTORE_H
#define MTSKEYCHAINSTORE_H

@class NSDictionary, NSString;
@protocol MTSKeychainStoreDataSource;

#import <Foundation/Foundation.h>


@interface MTSKeychainStore : NSObject

@property (readonly, copy) NSDictionary *allDataByKey;
@property (readonly) NSObject<MTSKeychainStoreDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *scope; // ivar: _scope


+(id)logCategory;
-(BOOL)removeAllDataWithError:(*id)arg0 ;
-(BOOL)removeDataForKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)setData:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)attributeDictionaryForAddingData:(id)arg0 forKey:(id)arg1 ;
-(id)attributeDictionaryForUpdatingData:(id)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)initWithScope:(id)arg0 ;
-(id)initWithScope:(id)arg0 dataSource:(id)arg1 ;
-(id)queryDictionaryForKey:(id)arg0 isExpectingReturnData:(BOOL)arg1 ;


@end


#endif