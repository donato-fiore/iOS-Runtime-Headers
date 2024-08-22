// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCATEGORIES_H
#define CTCATEGORIES_H

@class NSString, NSLock, NSArray;

#import <Foundation/Foundation.h>


@interface CTCategories : NSObject {
    NSString *_indexVersionId;
    NSLock *_lookupLock;
}


@property (readonly, copy) NSArray *availableCategoryIDs;


+(NSInteger)currentIOSDevice;
+(id)sharedCategories;
+(id)supportedWebBrowserBundleIdentifiersForDeviceFamily:(NSInteger)arg0 ;
+(id)systemBlockableBundleIdentifiersForDeviceFamily:(NSInteger)arg0 ;
+(id)systemHiddenBundleIdentifiersForDeviceFamily:(NSInteger)arg0 ;
+(id)systemUnblockableBundleIdentifiersForDeviceFamily:(NSInteger)arg0 ;
+(void)initialize;
-(id)bundleIDForPlatform:(id)arg0 fromBundleID:(id)arg1 platform:(id)arg2 ;
-(id)init;
-(void)_emptySharedCache:(id)arg0 ;
-(void)categoriesForBundleIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)categoriesForBundleIDs:(id)arg0 platform:(id)arg1 completionHandler:(id)arg2 ;
-(void)categoriesForDomainNames:(id)arg0 completionHandler:(id)arg1 ;
-(void)categoriesForDomainURLs:(id)arg0 completionHandler:(id)arg1 ;
-(void)categoryForBundleID:(id)arg0 completionHandler:(id)arg1 ;
-(void)categoryForBundleID:(id)arg0 platform:(id)arg1 completionHandler:(id)arg2 ;
-(void)categoryForDomainName:(id)arg0 completionHandler:(id)arg1 ;
-(void)categoryForDomainURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)emptyCache;
-(void)unCategorizedDomainsFromDomains:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif