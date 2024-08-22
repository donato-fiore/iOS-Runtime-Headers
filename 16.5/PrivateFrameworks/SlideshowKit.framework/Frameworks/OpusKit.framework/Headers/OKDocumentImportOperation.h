// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKDOCUMENTIMPORTOPERATION_H
#define OKDOCUMENTIMPORTOPERATION_H

@class OFNSOperation, NSURL;


#import "OKDocument.h"

@interface OKDocumentImportOperation : OFNSOperation {
    OKDocument *_document;
    NSURL *_resourceURL;
    BOOL _opaque;
}


@property (readonly, copy, nonatomic) NSURL *importedResourceURL; // ivar: _importedResourceURL
@property (retain, nonatomic) NSURL *temporaryDownloadedMediaFileURL; // ivar: _temporaryDownloadedMediaFileURL
@property (retain, nonatomic) NSURL *temporaryThumbnailMediaFileURL; // ivar: _temporaryThumbnailMediaFileURL
@property (retain, nonatomic) NSURL *temporaryTranscodedMediaFileURL; // ivar: _temporaryTranscodedMediaFileURL


-(NSUInteger)launchOperation;
-(id)init;
-(id)initWithDocument:(id)arg0 resourceURL:(id)arg1 importedResourceURL:(id)arg2 opaque:(BOOL)arg3 ;
-(void)cancelOperation;
-(void)cleanupOperation;
-(void)dealloc;
-(void)finishOperation;


@end


#endif