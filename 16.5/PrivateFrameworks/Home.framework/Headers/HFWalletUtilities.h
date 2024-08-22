// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFWALLETUTILITIES_H
#define HFWALLETUTILITIES_H


#import <Foundation/Foundation.h>


@interface HFWalletUtilities : NSObject



+(BOOL)isWalletKeyDeviceStateCompatible:(id)arg0 ;
+(NSUInteger)pkPassHomeKeyLiveRenderTypeForHMHomeWalletKeyColor:(NSInteger)arg0 ;
+(id)handleAddOrShowHomeKeyButtonTapForHome:(id)arg0 ;
+(id)packageIconIdentifierForHome:(id)arg0 shouldUseKeyholeAsset:(BOOL)arg1 shouldIgnoreDarkMode:(BOOL)arg2 ;
+(id)walletAppFromAppStoreURL;
+(id)walletAppURL;
+(id)walletKeyColorOfDeviceState:(id)arg0 ;
+(id)walletKeyIconDescriptorForHome:(id)arg0 shouldUseKeyholeAsset:(BOOL)arg1 shouldIgnoreDarkMode:(BOOL)arg2 foriPhoneDevice:(BOOL)arg3 ;


@end


#endif