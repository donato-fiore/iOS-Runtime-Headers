// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLASTDOORCOMBINEDPLUGINATTACHMENTINFO_H
#define BLASTDOORCOMBINEDPLUGINATTACHMENTINFO_H

@class NSURL, NSString, NSData;

#import <Foundation/Foundation.h>


@interface BlastDoorCombinedPluginAttachmentInfo : NSObject {
    ? combinedPluginAttachmentInfo;
}


@property (nonatomic, readonly) NSURL *attachmentURL;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *encryptionKey;
@property (nonatomic, readonly) NSUInteger expectedFileSize;
@property (nonatomic, readonly) NSString *ownerID;
@property (nonatomic, readonly) NSData *signature;


-(id)init;


@end


#endif