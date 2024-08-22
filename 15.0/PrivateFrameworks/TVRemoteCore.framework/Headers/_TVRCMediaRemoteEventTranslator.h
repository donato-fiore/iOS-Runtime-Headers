// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMEDIAREMOTEEVENTTRANSLATOR_H
#define _TVRCMEDIAREMOTEEVENTTRANSLATOR_H


#import <Foundation/Foundation.h>

#import "_TVRCMROriginWrapper.h"
#import "_TVRCMRTelevisionWrapper.h"
#import "_TVRCMRVirtualTouchDeviceWrapper.h"

@interface _TVRCMediaRemoteEventTranslator : NSObject

@property (weak, nonatomic) _TVRCMROriginWrapper *origin; // ivar: _origin
@property (weak, nonatomic) _TVRCMRTelevisionWrapper *television; // ivar: _television
@property (readonly, nonatomic) _TVRCMRVirtualTouchDeviceWrapper *touchDevice;


-(BOOL)_isMediaButtonEvent:(id)arg0 ;
-(id)_commandOptionsForMediaButtonEvent:(id)arg0 command:(unsigned int)arg1 ;
-(struct _MRHIDButtonEvent )_createMRHIDButtonEventTemplateWithButtonType:(NSInteger)arg0 ;
-(struct _MRHIDTouchEvent )_createMRHIDTouchEvent:(id)arg0 ;
-(unsigned int)_commandForMediaButtonEvent:(id)arg0 ;
-(void)sendButtonEvent:(id)arg0 ;
-(void)sendTouchEvent:(id)arg0 withDeviceID:(NSUInteger)arg1 ;


@end


#endif