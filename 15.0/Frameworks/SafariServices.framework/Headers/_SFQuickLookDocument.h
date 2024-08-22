// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFQUICKLOOKDOCUMENT_H
#define _SFQUICKLOOKDOCUMENT_H

@class LSDocumentProxy, NSString, NSURL;
@protocol _SFQuickLookDocumentSource;

#import <Foundation/Foundation.h>


@interface _SFQuickLookDocument : NSObject {
    BOOL _shouldDeleteSavedPath;
    BOOL _shouldDeleteSavedPathWithProperExtension;
}


@property (retain, nonatomic) LSDocumentProxy *documentProxy; // ivar: _documentProxy
@property (weak, nonatomic) NSObject<_SFQuickLookDocumentSource> *documentSource; // ivar: _documentSource
@property (copy, nonatomic) NSString *fileName; // ivar: _fileName
@property (readonly, nonatomic) NSUInteger fileSize;
@property (readonly, copy, nonatomic) NSString *inferredUTI;
@property (readonly, copy, nonatomic) NSString *localizedType;
@property (copy, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (readonly, nonatomic) BOOL needsQuickLookDocumentView; // ivar: _needsQuickLookDocumentView
@property (copy, nonatomic) NSString *savedPath; // ivar: _savedPath
@property (copy, nonatomic) NSString *savedPathWithProperExtension; // ivar: _savedPathWithProperExtension
@property (readonly, copy, nonatomic) NSURL *savedURLWithProperExtension;
@property (readonly, nonatomic) BOOL shouldUnzipByUIDocumentInteractionController;
@property (retain, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (copy, nonatomic) NSString *uti; // ivar: _uti


+(BOOL)_hasSuitableApplicationForOpeningDocument:(id)arg0 ;
-(id)initWithFileName:(id)arg0 mimeType:(id)arg1 uti:(id)arg2 needsQuickLookDocumentView:(BOOL)arg3 ;
-(void)_deleteSavedPathIfNecessary;
-(void)_deleteSavedPathWithProperExtensionIfNecessary;
-(void)addQuickLookPrintSettingsToPrintInfo:(id)arg0 ;
-(void)dealloc;
-(void)saveToFileIfNeeded;


@end


#endif