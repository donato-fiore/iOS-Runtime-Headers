// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNICLASSICRESOURCEMANAGER_H
#define NUNICLASSICRESOURCEMANAGER_H

@class CLKUIResourceProviderKey, NSMapTable, NSString;
@protocol CLKUIResourceProviderDelegate, MTLDevice;

#import <Foundation/Foundation.h>


@interface NUNIClassicResourceManager : NSObject <CLKUIResourceProviderDelegate>

 {
    id<MTLDevice> *_device;
    CLKUIResourceProviderKey *_resourceProviderKey;
    NSUInteger _clients;
    NSMapTable *_textureGroupHashTable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)_deallocInstance:(id)arg0 ;
-(id)init;
-(id)provideAtlasBacking:(id)arg0 ;
-(id)resourceProviderKey;
-(id)textureGroupWithSuffix:(id)arg0 ;
-(void)_asyncDeallocInstance;
-(void)addClient;
-(void)dealloc;
-(void)removeClient;


@end


#endif