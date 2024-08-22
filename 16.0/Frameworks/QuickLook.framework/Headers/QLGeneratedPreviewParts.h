// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLGENERATEDPREVIEWPARTS_H
#define QLGENERATEDPREVIEWPARTS_H

@class QLPreviewParts, NSDictionary, NSData, NSMutableDictionary, NSString;



@interface QLGeneratedPreviewParts : QLPreviewParts

@property (retain) NSDictionary *attachments; // ivar: _attachments
@property (retain) NSData *data; // ivar: _data
@property (retain) NSMutableDictionary *idToURL; // ivar: _idToURL
@property (retain) NSString *mimeType; // ivar: _mimeType
@property NSUInteger stringEncoding; // ivar: _stringEncoding


-(id)URLRequestForContentID:(id)arg0 ;
-(id)initWithData:(id)arg0 encoding:(NSUInteger)arg1 mimeType:(id)arg2 attachments:(id)arg3 ;
-(id)newAttachmentURLWithID:(id)arg0 mimeType:(id)arg1 encoding:(NSUInteger)arg2 ;
-(void)_processAttachment:(id)arg0 withID:(id)arg1 ;
-(void)_registerURL:(id)arg0 forContentID:(id)arg1 ;
-(void)computePreview:(id)arg0 ;


@end


#endif