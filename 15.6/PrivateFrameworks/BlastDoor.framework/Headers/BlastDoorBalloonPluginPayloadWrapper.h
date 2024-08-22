// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORBALLOONPLUGINPAYLOADWRAPPER_H
#define BLASTDOORBALLOONPLUGINPAYLOADWRAPPER_H

@class NSString, NSData;

#import <Foundation/Foundation.h>

#import "BlastDoorCombinedPluginAttachmentInfo.h"

@interface BlastDoorBalloonPluginPayloadWrapper : NSObject {
    ? balloonPlugin_Payload;
}


@property (nonatomic, readonly) BlastDoorCombinedPluginAttachmentInfo *combinedPluginAttachmentInfo;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *digitalTouchBalloon;
@property (nonatomic, readonly) NSData *handwriting;
@property (nonatomic, readonly) NSData *linkPresentation;
@property (nonatomic, readonly) NSData *messagesAppBalloon;
@property (nonatomic, readonly) NSUInteger type;


-(id)init;


@end


#endif