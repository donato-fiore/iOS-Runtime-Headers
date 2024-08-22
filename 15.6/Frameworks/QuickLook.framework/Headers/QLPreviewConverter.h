// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLPREVIEWCONVERTER_H
#define QLPREVIEWCONVERTER_H

@class NSDictionary, NSURL, NSString, NSURLRequest, NSURLResponse;
@protocol OS_dispatch_io;

#import <Foundation/Foundation.h>

#import "QLPreviewConverterParts.h"

@interface QLPreviewConverter : NSObject {
    QLPreviewConverterParts *_previewParts;
    NSDictionary *_options;
    NSObject<OS_dispatch_io> *_io_write;
    NSURL *_tmpFileURL;
    NSInteger _totalWrittenBytes;
    BOOL _dataPhaseFinished;
    BOOL _dataGatheringSucceeded;
}


@property (readonly, nonatomic) NSString *previewFileName;
@property (readonly, nonatomic) QLPreviewConverterParts *previewParts;
@property (readonly, nonatomic) NSURLRequest *previewRequest;
@property (readonly, nonatomic) NSURLResponse *previewResponse;
@property (readonly, nonatomic) NSString *previewUTI;


+(BOOL)canConvertDocumentType:(id)arg0 ;
+(BOOL)isCSVDocumentType:(id)arg0 ;
+(BOOL)isIWorkDocumentType:(id)arg0 ;
+(BOOL)isLPDFDocumentType:(id)arg0 ;
+(BOOL)isOfficeDocumentType:(id)arg0 ;
+(BOOL)isRTFDocumentType:(id)arg0 ;
+(BOOL)isSafeRequest:(id)arg0 ;
+(BOOL)isSafeURL:(id)arg0 ;
+(BOOL)isSpreadSheetDocumentType:(id)arg0 ;
+(id)_csvMIMETypes;
+(id)_csvUTIs;
+(id)_iWorkMIMETypes;
+(id)_iWorkUTIs;
+(id)_lpdfUTIs;
+(id)_officeMIMETypes;
+(id)_officeUTIs;
+(id)_rtfMIMETypes;
+(id)_rtfUTIs;
+(id)_spreadSheetMIMETypes;
+(id)_spreadSheetUTIs;
+(id)convertibleMIMETypes;
+(id)convertibleTypes;
+(id)convertibleUTIs;
-(BOOL)htmlErrorDisabled;
-(BOOL)isCancelled;
-(BOOL)isComputed;
-(id)initWithConnection:(id)arg0 delegate:(id)arg1 response:(id)arg2 options:(id)arg3 ;
-(id)initWithData:(id)arg0 name:(id)arg1 uti:(id)arg2 options:(id)arg3 ;
-(id)initWithURL:(id)arg0 uti:(id)arg1 options:(id)arg2 ;
-(id)safeRequestForRequest:(id)arg0 ;
-(void)_closeIOCahnnel;
-(void)_createDispatchIOChannel;
-(void)_register;
-(void)_writeDataArrayIntoStream:(id)arg0 ;
-(void)appendData:(id)arg0 ;
-(void)appendDataArray:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)finishConverting;
-(void)finishedAppendingData;
-(void)setHtmlErrorDisabled:(BOOL)arg0 ;


@end


#endif