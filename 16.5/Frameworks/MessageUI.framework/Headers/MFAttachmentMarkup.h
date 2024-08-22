// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFATTACHMENTMARKUP_H
#define MFATTACHMENTMARKUP_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface MFAttachmentMarkup : NSObject

@property (retain, nonatomic) NSData *attachmentData; // ivar: _attachmentData
@property (retain, nonatomic) NSString *contentID; // ivar: _contentID
@property (retain, nonatomic) NSString *contextID; // ivar: _contextID
@property (retain, nonatomic) NSString *filename; // ivar: _filename
@property (retain, nonatomic) NSString *mimeType; // ivar: _mimeType


+(id)attachmentMarkupWithProperties:(id)arg0 contentID:(id)arg1 mimeType:(id)arg2 filename:(id)arg3 contextID:(id)arg4 ;


@end


#endif