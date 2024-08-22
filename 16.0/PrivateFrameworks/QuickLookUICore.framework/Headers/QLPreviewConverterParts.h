// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLPREVIEWCONVERTERPARTS_H
#define QLPREVIEWCONVERTERPARTS_H

@class QLPreviewParts, NSURLResponse, NSThread, NSError, NSSet, NSURLConnection, NSData, NSString, NSURL;



@interface QLPreviewConverterParts : QLPreviewParts {
    *void _convertFunction;
    NSURLResponse *previewResponse;
    NSThread *delegateCallbackThread;
    NSError *mainError;
    BOOL computed;
    BOOL cancelled;
}


@property (readonly, nonatomic) NSSet *attachmentURLs;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, getter=isComputed) BOOL computed;
@property (retain, nonatomic) NSURLConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property BOOL htmlErrorDisabled; // ivar: htmlErrorDisabled
@property (readonly) NSInteger pageCount; // ivar: _pageCount
@property (readonly) float pageHeight; // ivar: _pageHeight
@property (readonly) float pageWidth; // ivar: _pageWidth
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSURLResponse *previewResponse;
@property (nonatomic) BOOL progressive; // ivar: _progressive
@property (nonatomic) BOOL shouldRemoveURLAfterGeneration; // ivar: _shouldRemoveURLAfterGeneration
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) NSString *uti; // ivar: _uti


+(void)registerPreview:(id)arg0 ;
+(void)unregisterPreview:(id)arg0 ;
-(id)mimeTypeForAttachmentURL:(id)arg0 ;
-(id)newAttachmentURLWithID:(id)arg0 properties:(id)arg1 ;
-(id)previewRequest;
-(id)safeRequestForRequest:(id)arg0 ;
-(void)appendData:(id)arg0 forURL:(id)arg1 lastChunk:(BOOL)arg2 ;
-(void)cancel;
-(void)computePreview;
-(void)computePreviewInThread;
-(void)dealloc;
-(void)registerURL:(id)arg0 mimeType:(id)arg1 textEncoding:(id)arg2 ;
-(void)setError:(id)arg0 ;
-(void)startDataRepresentationWithContentType:(id)arg0 properties:(id)arg1 ;


@end


#endif