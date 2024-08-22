// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDCELLULARSETTINGS_H
#define ASDCELLULARSETTINGS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ASDCellularSettings : NSObject {
    NSString *_defaultsKey;
}


@property (nonatomic) BOOL allowAutomaticDownloads;
@property (nonatomic) NSInteger cellularDataPrompt;


+(id)settingsForIdentity:(id)arg0 ;
-(id)initWithDefaultsKey:(id)arg0 ;


@end


#endif