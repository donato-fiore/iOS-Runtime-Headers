// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKATTACHMENTINFO_H
#define _WKATTACHMENTINFO_H

@class NSString, NSData, NSFileWrapper;

#import <Foundation/Foundation.h>


@interface _WKAttachmentInfo : NSObject {
    RefPtr<const API::Attachment, WTF::RawPtrTraits<const API::Attachment>, WTF::DefaultRefDerefTraits<const API::Attachment>> _attachment;
    RetainPtr<NSString> _mimeType;
    RetainPtr<NSString> _utiType;
    RetainPtr<NSString> _filePath;
}


@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSFileWrapper *fileWrapper;
@property (readonly, nonatomic) NSString *name;


-(id)initWithAttachment:(*void)arg0 ;


@end


#endif