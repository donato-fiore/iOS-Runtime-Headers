// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIGLOBALSETTINGS_H
#define PIGLOBALSETTINGS_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PIGlobalSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}


@property (nonatomic) BOOL allowSpillMatteOnOlderPortraitV2Captures; // ivar: _allowSpillMatteOnOlderPortraitV2Captures
@property (nonatomic) BOOL forceGlassesMatteOff; // ivar: _forceGlassesMatteOff
@property (nonatomic) BOOL forceSpillMatteOff; // ivar: _forceSpillMatteOff


+(BOOL)falseColorHDR;
+(id)IPXEditSettings;
+(id)PUEditSettings;
+(id)editSettings;
+(id)globalSettings;
+(void)setFalseColorHDR:(BOOL)arg0 ;
-(id)decoratorRenderFiltersForImages;
-(id)decoratorRenderFiltersForVideos;
-(id)init;


@end


#endif