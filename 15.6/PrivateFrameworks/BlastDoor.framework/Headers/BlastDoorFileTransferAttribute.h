// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORFILETRANSFERATTRIBUTE_H
#define BLASTDOORFILETRANSFERATTRIBUTE_H

@class NSArray, NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "BlastDoorFileTransferAttributeAttachmentSubtypeWrapper.h"
#import "BlastDoorFileTransferAttribute_ImageInfo.h"

@interface BlastDoorFileTransferAttribute : NSObject {
    ? attachments;
    ? name;
    ? utiType;
    ? mimeType;
}


@property (nonatomic, retain) BlastDoorFileTransferAttributeAttachmentSubtypeWrapper *attachmentSubtype; // ivar: attachmentSubtype
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic) NSUInteger datasize; // ivar: datasize
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) BlastDoorFileTransferAttribute_ImageInfo *imageInfo; // ivar: imageInfo
@property (nonatomic, retain) NSNumber *legacyAnimoji; // ivar: legacyAnimoji
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *utiType;


-(id)init;


@end


#endif