// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXCHARACTERVOICEASSETPOLICY_H
#define AXCHARACTERVOICEASSETPOLICY_H

@class NSString;


#import "AXAssetPolicy.h"

@interface AXCharacterVoiceAssetPolicy : AXAssetPolicy

@property (retain, nonatomic) NSString *language; // ivar: _language


+(id)characterVoiceAssetPolicyWithLanguage:(id)arg0 ;
-(BOOL)shouldDownloadAsset:(id)arg0 withInstalledAssets:(id)arg1 ;
-(id)assetType;
-(id)assetsToPurgeFromInstalledAssets:(id)arg0 ;
-(id)downloadOptionsForOperation:(NSUInteger)arg0 userInitiated:(BOOL)arg1 ;
-(id)init;


@end


#endif