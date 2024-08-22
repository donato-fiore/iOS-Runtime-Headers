// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORSTICKERATTACHMENTINFO_H
#define BLASTDOORSTICKERATTACHMENTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorStickerAttachmentInfo : NSObject {
    ? stickerAttachmentInfo;
}


@property (nonatomic, readonly) NSUInteger associatedPositionIntent;
@property (nonatomic, readonly) NSString *balloonBundleID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_associatedPositionIntent;
@property (nonatomic, readonly) BOOL has_parentPreviewWidth;
@property (nonatomic, readonly) BOOL has_positionIntent;
@property (nonatomic, readonly) BOOL has_stickerOffset;
@property (nonatomic, readonly) BOOL has_stickerRotation;
@property (nonatomic, readonly) BOOL has_stickerScale;
@property (nonatomic, readonly) CGFloat parentPreviewWidth;
@property (nonatomic, readonly) NSUInteger positionIntent;
@property (nonatomic, readonly) NSString *stickerHash;
@property (nonatomic, readonly) NSString *stickerIdentifier;
@property (nonatomic, readonly) CGPoint stickerOffset;
@property (nonatomic, readonly) NSString *stickerPackIdentifier;
@property (nonatomic, readonly) CGFloat stickerRotation;
@property (nonatomic, readonly) CGFloat stickerScale;


-(id)init;


@end


#endif