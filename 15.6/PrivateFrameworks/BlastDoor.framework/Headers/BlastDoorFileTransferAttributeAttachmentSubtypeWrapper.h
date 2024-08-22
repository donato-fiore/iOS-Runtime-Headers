// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORFILETRANSFERATTRIBUTEATTACHMENTSUBTYPEWRAPPER_H
#define BLASTDOORFILETRANSFERATTRIBUTEATTACHMENTSUBTYPEWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorAudioMessageAttachmentInfo.h"
#import "BlastDoorLivePhotoAttachmentInfo.h"
#import "BlastDoorStickerAttachmentInfo.h"
#import "BlastDoorGeneralAttachmentInfo.h"

@interface BlastDoorFileTransferAttributeAttachmentSubtypeWrapper : NSObject {
    ? fileTransferAttribute_AttachmentSubtype;
}


@property (nonatomic, readonly) BlastDoorAudioMessageAttachmentInfo *audioMessage;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorLivePhotoAttachmentInfo *livePhoto;
@property (nonatomic, readonly) BlastDoorStickerAttachmentInfo *sticker;
@property (nonatomic, readonly) NSUInteger type;
@property (nonatomic, readonly) BlastDoorGeneralAttachmentInfo *unspecified;


-(id)init;


@end


#endif