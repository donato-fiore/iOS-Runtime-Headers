// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFBUNDLERESOURCEMANAGER_H
#define AFBUNDLERESOURCEMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AFBundleResourceManager : NSObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_resourceURLProvidersByIdentifier;
}




+(id)sharedManager;
-(id)URLForResource:(id)arg0 ;
-(id)URLForSoundID:(NSInteger)arg0 ;
-(id)init;
-(id)resourceForSoundID:(NSInteger)arg0 ;


@end


#endif