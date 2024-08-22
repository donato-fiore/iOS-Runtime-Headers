// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMAILATTACHMENT_H
#define SGMAILATTACHMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SGMailAttachment : NSObject

@property (readonly, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic) BOOL isApplicationMimeType;
@property (readonly, nonatomic) BOOL isCalendarMimeType;
@property (readonly, nonatomic) BOOL isDownloadedLocally; // ivar: _isDownloadedLocally
@property (readonly, nonatomic) BOOL isMediaMimeType;
@property (readonly, nonatomic) BOOL isOthersMimeType;
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSUInteger size; // ivar: _size
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)attachmentWithType:(id)arg0 filename:(id)arg1 path:(id)arg2 ;
+(id)attachmentsFromBiomeAttachments:(id)arg0 ;
+(id)attachmentsFromSearchableItem:(id)arg0 ;
+(id)testAttachmentWithType:(id)arg0 size:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithType:(id)arg0 filename:(id)arg1 path:(id)arg2 ;
-(id)mimeCategory;


@end


#endif