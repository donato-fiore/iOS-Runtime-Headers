// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVEXPORTSETTINGSOUTPUTSETTINGSASSISTANTBASESETTINGS_H
#define AVEXPORTSETTINGSOUTPUTSETTINGSASSISTANTBASESETTINGS_H

@class NSDictionary, NSString;
@protocol AVOutputSettingsAssistantBaseSettingsProvider;

#import <Foundation/Foundation.h>


@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider>

 {
    NSDictionary *_exportSettings;
}


@property (readonly, nonatomic) NSDictionary *baseAudioSettings;
@property (readonly, nonatomic) NSDictionary *baseVideoSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithOutputSettingsPreset:(id)arg0 ;
-(void)dealloc;


@end


#endif