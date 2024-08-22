// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCBUNDLERESOURCEMANAGER_H
#define TCBUNDLERESOURCEMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TCBundleResourceManager : NSObject {
    NSMutableDictionary *mPackageMap;
}




+(id)instance;
+(void)disposeInstance;
-(?)xmlDocumentForResource:(?)arg0 ofType:(?)arg1 inPackagecacheResult;
-(id)dataForResource:(id)arg0 ofType:(id)arg1 inPackage:(id)arg2 cacheResult:(BOOL)arg3 ;
-(id)init;
-(id)packageWithName:(id)arg0 cacheResult:(BOOL)arg1 ;


@end


#endif