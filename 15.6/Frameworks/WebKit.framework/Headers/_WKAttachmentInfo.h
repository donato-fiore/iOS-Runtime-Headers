// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WKATTACHMENTINFO_H
#define _WKATTACHMENTINFO_H

@class NSString, NSData, NSFileWrapper;

#import <Foundation/Foundation.h>


@interface _WKAttachmentInfo : NSObject {
    RetainPtr<NSFileWrapper> _fileWrapper;
    RetainPtr<NSString> _mimeType;
    RetainPtr<NSString> _utiType;
    RetainPtr<NSString> _filePath;
}


@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSFileWrapper *fileWrapper;
@property (readonly, nonatomic) NSString *name;


-(id)initWithFileWrapper:(id)arg0 filePath:(id)arg1 mimeType:(id)arg2 utiType:(id)arg3 ;


@end


#endif