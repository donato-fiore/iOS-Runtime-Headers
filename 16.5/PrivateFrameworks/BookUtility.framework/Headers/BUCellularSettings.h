// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUCELLULARSETTINGS_H
#define BUCELLULARSETTINGS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BUCellularSettings : NSObject {
    NSString *_defaultsKey;
}


@property (nonatomic) BOOL allowAutomaticDownloads;
@property (nonatomic) NSInteger cellularDataPrompt;
@property (readonly, nonatomic) BOOL legacyAllowAutomaticDownloads;


+(BOOL)shouldShowCellularAutomaticDownloadsSwitch;
+(id)_copyValueForCarrierBundleKey:(id)arg0 ;
+(id)settingsForIdentity:(id)arg0 ;
-(id)_cellularSettings;
-(id)initWithDefaultsKey:(id)arg0 ;


@end


#endif