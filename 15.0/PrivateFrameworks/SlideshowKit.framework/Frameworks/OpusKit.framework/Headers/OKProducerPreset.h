// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKPRODUCERPRESET_H
#define OKPRODUCERPRESET_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface OKProducerPreset : NSObject {
    NSString *_family;
    NSString *_name;
    NSDictionary *_presetDictionary;
    NSString *_localizedName;
    NSArray *_guidelines;
    NSArray *_audioURLs;
}




-(BOOL)isAvailable;
-(BOOL)isDefault;
-(BOOL)isLocal;
-(BOOL)supportsSettingType:(NSUInteger)arg0 ;
-(id)_settingKeyForType:(NSUInteger)arg0 ;
-(id)audioURLs;
-(id)backgroundColor;
-(id)family;
-(id)guidelines;
-(id)init;
-(id)initWithFamily:(id)arg0 andPluginIdentifier:(id)arg1 ;
-(id)initWithFamily:(id)arg0 name:(id)arg1 andDictionary:(id)arg2 ;
-(id)localizedName;
-(id)pluginIdentifier;
-(id)uniqueIdentifier;
-(void)dealloc;


@end


#endif