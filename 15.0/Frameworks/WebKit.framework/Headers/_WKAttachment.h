// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKATTACHMENT_H
#define _WKATTACHMENT_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>

#import "_WKAttachmentInfo.h"

@interface _WKAttachment : NSObject <WKObject>

 {
    ObjectStorage<API::Attachment> _attachment;
}


@property (readonly) *Object _apiObject;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _WKAttachmentInfo *info;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueIdentifier;


-(void)dealloc;
-(void)requestInfo:(id)arg0 ;
-(void)setData:(id)arg0 newContentType:(id)arg1 newFilename:(id)arg2 completion:(id)arg3 ;
-(void)setFileWrapper:(id)arg0 contentType:(id)arg1 completion:(id)arg2 ;


@end


#endif