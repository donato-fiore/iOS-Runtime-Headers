// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CRKBUNDLEMANAGER_H
#define _CRKBUNDLEMANAGER_H

@class NSMutableSet, NSSet;

#import <Foundation/Foundation.h>


@interface _CRKBundleManager : NSObject {
    NSMutableSet *_bundles;
}


@property (readonly, nonatomic) NSSet *bundles;


+(Class)bundleClass;
+(id)bundleDirectoryPath;
+(id)sharedInstance;
-(id)init;
-(void)loadBundles;
-(void)registerBundle:(id)arg0 ;


@end


#endif