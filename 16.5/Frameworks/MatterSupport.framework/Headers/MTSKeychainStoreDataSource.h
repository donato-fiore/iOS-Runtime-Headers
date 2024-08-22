// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSKEYCHAINSTOREDATASOURCE_H
#define MTSKEYCHAINSTOREDATASOURCE_H

@class NSString;
@protocol MTSKeychainStoreDataSource;

#import <Foundation/Foundation.h>


@interface MTSKeychainStoreDataSource : NSObject <MTSKeychainStoreDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addItemWithAttributes:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeItemsMatchingQuery:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateItemMatchingQuery:(id)arg0 withAttributes:(id)arg1 error:(*id)arg2 ;
-(id)resultMatchingQuery:(id)arg0 error:(*id)arg1 ;


@end


#endif