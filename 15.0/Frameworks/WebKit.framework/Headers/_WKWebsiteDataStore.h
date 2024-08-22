// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKWEBSITEDATASTORE_H
#define _WKWEBSITEDATASTORE_H


#import <Foundation/Foundation.h>


@interface _WKWebsiteDataStore : NSObject {
    RetainPtr<WKWebsiteDataStore> _dataStore;
}


@property (readonly, getter=isNonPersistent) BOOL nonPersistent;


+(id)defaultDataStore;
+(id)nonPersistentDataStore;
-(id)initWithDataStore:(id)arg0 ;
-(void)fetchDataRecordsOfTypes:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)removeDataOfTypes:(NSUInteger)arg0 forDataRecords:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeDataOfTypes:(NSUInteger)arg0 modifiedSince:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif