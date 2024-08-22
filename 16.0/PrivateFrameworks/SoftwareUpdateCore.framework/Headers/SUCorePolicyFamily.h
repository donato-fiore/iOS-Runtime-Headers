// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREPOLICYFAMILY_H
#define SUCOREPOLICYFAMILY_H


#import <Foundation/Foundation.h>


@interface SUCorePolicyFamily : NSObject



+(id)_copyGestaltValueForKey:(struct __CFString *)arg0 ;
+(id)_getGenericDefaultAssetTypeForKind:(int)arg0 ;
+(id)_getIOSAssetTypeForKind:(int)arg0 ;
+(id)_getMacOSAssetTypeForKind:(int)arg0 ;
+(id)_getNERDBRAINAssetTypeForKind:(int)arg0 ;
+(id)_getNERDCAssetTypeForKind:(int)arg0 ;
+(id)_getNERDSUAssetTypeForKind:(int)arg0 ;
+(id)_getPlatformDefaultAssetTypeForKind:(int)arg0 ;
+(id)_getTVOSAssetTypeForKind:(int)arg0 ;
+(id)_getWatchOSAssetTypeForKind:(int)arg0 ;
+(id)getAssetTypeForKind:(int)arg0 usingFamily:(int)arg1 ;
+(id)getNameForSUCorePolicyAssetFamily:(int)arg0 ;
+(id)getNameForSUCorePolicyAssetKind:(int)arg0 ;
+(int)getFamilyForBuildTarget;
+(int)getFamilyUsingDeviceClass:(id)arg0 ;


@end


#endif