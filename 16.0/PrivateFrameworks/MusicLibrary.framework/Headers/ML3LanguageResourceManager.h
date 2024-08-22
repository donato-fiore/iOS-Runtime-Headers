// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3LANGUAGERESOURCEMANAGER_H
#define ML3LANGUAGERESOURCEMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ML3LanguageResources.h"

@interface ML3LanguageResourceManager : NSObject

@property (retain, nonatomic) ML3LanguageResources *cachedResources; // ivar: _cachedResources
@property (readonly, nonatomic) ML3LanguageResources *resources;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


+(id)sharedResourceManager;
-(id)_buildLanguageResources;
-(id)_init;
-(void)invalidateCachedResources;


@end


#endif