// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSQLKVSTORE_H
#define PPSQLKVSTORE_H


#import <Foundation/Foundation.h>


@interface PPSQLKVStore : NSObject



+(id)loadBlobForKey:(id)arg0 transaction:(id)arg1 ;
+(id)numberForKey:(id)arg0 transaction:(id)arg1 ;
+(id)stringForKey:(id)arg0 transaction:(id)arg1 ;
+(void)removeBlobForKey:(id)arg0 transaction:(id)arg1 ;
+(void)setNumber:(id)arg0 forKey:(id)arg1 transaction:(id)arg2 ;
+(void)setString:(id)arg0 forKey:(id)arg1 transaction:(id)arg2 ;
+(void)storeBlob:(id)arg0 forKey:(id)arg1 transaction:(id)arg2 ;


@end


#endif