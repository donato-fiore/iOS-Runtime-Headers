// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LCFMODELSTOREUTILS_H
#define LCFMODELSTOREUTILS_H


#import <Foundation/Foundation.h>


@interface LCFModelStoreUtils : NSObject



+(BOOL)isEnabledOnMacOS;
+(BOOL)isPlatformMacOS;
+(BOOL)isPlatformWatchOS;
+(BOOL)isPlatformiOS;
+(BOOL)isPlatformtvOS;
+(BOOL)isSupportedPlatform;
+(id)getBaseLocalPath;
+(id)sha256For:(id)arg0 ;
+(id)sha256ForURL:(id)arg0 ;
+(void)SwitchToMobile;


@end


#endif