// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBPRESETSPARSER_H
#define CBPRESETSPARSER_H

@class NSArray, NSMutableDictionary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CBPresetsParser : NSObject {
    NSArray *_displayList;
    NSMutableDictionary *_displayPresets;
    NSObject<OS_os_log> *_logHandle;
}




+(id)sharedInstance;
-(BOOL)autoBrightnessDisabledForDisplay:(NSUInteger)arg0 ;
-(BOOL)brightnessDisabledForDisplay:(NSUInteger)arg0 ;
-(BOOL)nightShiftDisabled;
-(BOOL)referenceMode:(NSUInteger)arg0 ;
-(BOOL)trueToneDisabled;
-(id)init;
-(void)dealloc;
-(void)refreshPresetState;
-(void)setDisplayList:(id)arg0 ;


@end


#endif