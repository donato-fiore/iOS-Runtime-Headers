// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVIOKITOUTPUTSETTINGSASSISTANTVIDEOENCODERCAPABILITIES_H
#define AVIOKITOUTPUTSETTINGSASSISTANTVIDEOENCODERCAPABILITIES_H

@class NSString;
@protocol AVOutputSettingsAssistantVideoEncoderCapabilities;

#import <Foundation/Foundation.h>


@interface AVIOKitOutputSettingsAssistantVideoEncoderCapabilities : NSObject <AVOutputSettingsAssistantVideoEncoderCapabilities>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)averageNonDroppableFrameIntervalIsSupportedByDefaultEncoderForVideoCodec:(id)arg0 ;


@end


#endif