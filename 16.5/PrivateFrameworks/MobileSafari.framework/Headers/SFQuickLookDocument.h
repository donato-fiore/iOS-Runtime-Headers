// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFQUICKLOOKDOCUMENT_H
#define SFQUICKLOOKDOCUMENT_H

@class LSDocumentProxy, NSString, NSURL;
@protocol SFQuickLookDocumentSource;

#import <Foundation/Foundation.h>


@interface SFQuickLookDocument : NSObject {
    LSDocumentProxy *_documentProxy;
    NSString *_fileName;
    NSString *_savedPathWithProperExtension;
    BOOL _shouldDeleteSavedPath;
    BOOL _shouldDeleteSavedPathWithProperExtension;
}


@property (readonly, nonatomic) LSDocumentProxy *documentProxy;
@property (weak, nonatomic) NSObject<SFQuickLookDocumentSource> *documentSource; // ivar: _documentSource
@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSUInteger fileSize;
@property (readonly, copy, nonatomic) NSString *inferredUTI;
@property (readonly, copy, nonatomic) NSString *localizedType;
@property (readonly, copy, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (readonly, nonatomic) BOOL needsQuickLookDocumentView; // ivar: _needsQuickLookDocumentView
@property (readonly, copy, nonatomic) NSString *savedPath; // ivar: _savedPath
@property (readonly, copy, nonatomic) NSString *savedPathWithProperExtension;
@property (readonly, copy, nonatomic) NSURL *savedURLWithProperExtension;
@property (readonly, nonatomic) BOOL shouldUnzipByUIDocumentInteractionController;
@property (retain, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (readonly, copy, nonatomic) NSString *uti; // ivar: _uti


+(BOOL)_hasSuitableApplicationForOpeningDocument:(id)arg0 ;
+(id)properFilenameForOriginalFilename:(id)arg0 typeIdentifier:(id)arg1 mimeType:(id)arg2 sourceURL:(id)arg3 ;
-(id)initWithFileName:(id)arg0 mimeType:(id)arg1 uti:(id)arg2 needsQuickLookDocumentView:(BOOL)arg3 ;
-(void)_deleteSavedPathIfNecessary;
-(void)_deleteSavedPathWithProperExtensionIfNecessary;
-(void)addQuickLookPrintSettingsToPrintInfo:(id)arg0 ;
-(void)dealloc;
-(void)saveToFileIfNeeded;


@end


#endif