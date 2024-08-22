// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESBUNDLEREGISTRY_H
#define DESBUNDLEREGISTRY_H

@class NSDictionary, NSSet, NSString;
@protocol DESBundleRegistryManaging;

#import <Foundation/Foundation.h>


@interface DESBundleRegistry : NSObject <DESBundleRegistryManaging>

 {
    NSDictionary *_bundleMap;
    NSSet *_lowMemoryExtensions;
    NSSet *_highMemoryExtensions;
    NSSet *_restrictedExtensions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionsWithEndpointName:(id)arg0 ;
+(id)sharedInstance;
+(void)initialize;
-(BOOL)containsBundleId:(id)arg0 ;
-(NSInteger)pluginTypeForBundleId:(id)arg0 ;
-(id)_init;
-(id)allBundleIds;
-(id)allUnrestrictedBundleIds;
-(id)allUnrestrictedExtensionIds;
-(id)infoDictionaryForBundleID:(id)arg0 ;
-(id)init;


@end


#endif