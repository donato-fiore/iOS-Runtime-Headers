// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOBILECALDAVATTACHMENTUPLOADINFO_H
#define MOBILECALDAVATTACHMENTUPLOADINFO_H

@class NSArray, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface MobileCalDAVAttachmentUploadInfo : NSObject

@property (retain, nonatomic) NSArray *calAttachmentsToUpload; // ivar: _calAttachmentsToUpload
@property (retain, nonatomic) NSURL *itemURL; // ivar: _itemURL
@property (retain, nonatomic) NSString *scheduleTag; // ivar: _scheduleTag
@property (retain, nonatomic) NSString *syncKey; // ivar: _syncKey




@end


#endif