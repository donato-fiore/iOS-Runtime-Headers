// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TBCOREDATASTOREDESCRIPTOR_H
#define TBCOREDATASTOREDESCRIPTOR_H

@class NSURL, NSPersistentStoreDescription, NSDictionary;

#import <Foundation/Foundation.h>


@interface TBCoreDataStoreDescriptor : NSObject

@property (retain, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (readonly, nonatomic) NSPersistentStoreDescription *storeDescription; // ivar: _storeDescription
@property (retain, nonatomic) NSDictionary *storeOptions; // ivar: _storeOptions
@property (retain, nonatomic) NSURL *storeURL; // ivar: _storeURL
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)clientStoreDescriptor;
+(id)defaultModelURL;
+(id)defaultPersistentStoreURLWithDirectory:(id)arg0 ;
+(id)defaultStoresDirectoryURL;
+(id)directStoreDescriptor;
+(id)serverStoreDescriptor;
+(id)tempStoreDescriptor;
+(id)tempStoresDirectoryURL;
-(id)initWithType:(NSUInteger)arg0 storeURL:(id)arg1 modelURL:(id)arg2 ;


@end


#endif