// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORFILETRANSFERATTRIBUTE_ATTACHMENTINFO_H
#define BLASTDOORFILETRANSFERATTRIBUTE_ATTACHMENTINFO_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorFileTransferAttribute_AttachmentInfo : NSObject {
    ? fileTransferAttribute_AttachmentInfo;
}


@property (nonatomic, readonly) NSURL *attachmentURL;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *encryptionKey;
@property (nonatomic, readonly) NSUInteger expectedFileSize;
@property (nonatomic, readonly) NSString *ownerID;
@property (nonatomic, readonly) NSString *signature;


-(id)init;


@end


#endif