// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLPREVIEWPARTS_H
#define QLPREVIEWPARTS_H

@class NSMutableDictionary, NSMutableSet, NSURLRequest, NSURL;

#import <Foundation/Foundation.h>


@interface QLPreviewParts : NSObject

@property (retain, nonatomic) NSMutableDictionary *encodingsForURLs; // ivar: _encodingsForURLs
@property (retain, nonatomic) NSMutableSet *outstandingURLs; // ivar: _outstandingURLs
@property (readonly, nonatomic) NSURLRequest *previewRequest;
@property (retain, nonatomic) NSURL *previewURL; // ivar: _previewURL
@property (retain, nonatomic) NSMutableSet *registeredURLs; // ivar: _registeredURLs


+(Class)urlProtocolClass;
+(id)registeredPreviewForURL:(id)arg0 ;
+(id)relativeStringForSafeURL:(id)arg0 ;
+(void)registerPreview:(id)arg0 ;
+(void)unregisterPreview:(id)arg0 ;
-(BOOL)isRegisteredURL:(id)arg0 ;
-(id)newAttachmentURLWithID:(id)arg0 mimeType:(id)arg1 textEncoding:(id)arg2 ;
-(id)newSafeAttachmentURLWithID:(id)arg0 mimeType:(id)arg1 textEncoding:(id)arg2 ;
-(id)requestForURL:(id)arg0 ;
-(id)voidRequest;
-(unsigned int)cfEncodingForAttachmentURL:(id)arg0 ;
-(void)appendData:(id)arg0 forURL:(id)arg1 lastChunk:(BOOL)arg2 ;
-(void)cancel;
-(void)computePreview:(id)arg0 ;
-(void)computePreviewInThread;
-(void)dealloc;
-(void)registerURL:(id)arg0 mimeType:(id)arg1 textEncoding:(id)arg2 ;
-(void)startAttachmentWithURL:(id)arg0 mimeType:(id)arg1 textEncoding:(id)arg2 ;
-(void)startComputingPreview;
-(void)startDataRepresentationWithMimeType:(id)arg0 textEncoding:(id)arg1 ;


@end


#endif