// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFWEBMESSAGEDOCUMENT_H
#define MFWEBMESSAGEDOCUMENT_H

@class MFLock, NSMutableDictionary, NSURL, NSData, MFMimeBody, MFMimePart;


#import "MFWebAttachmentSource.h"
#import "MFAttachmentManager.h"

@interface MFWebMessageDocument : MFWebAttachmentSource {
    unsigned int _uniqueId;
    MFLock *_lock;
    NSMutableDictionary *_partsByURL;
    NSMutableDictionary *_partsByFilename;
}


@property (retain, nonatomic) MFAttachmentManager *attachmentManager; // ivar: _attachmentManager
@property (readonly) NSURL *baseURL; // ivar: _baseURL
@property (readonly) NSData *htmlData; // ivar: _htmlData
@property (readonly) MFMimeBody *mimeBody; // ivar: _mimeBody
@property (readonly) MFMimePart *mimePart; // ivar: _htmlPart
@property unsigned int preferredEncoding; // ivar: _preferredEncoding
@property (getter=isVisuallyEmpty) BOOL visuallyEmpty; // ivar: _visuallyEmpty


-(id)_initWithMimePart:(id)arg0 htmlData:(id)arg1 ;
-(id)attachmentForURL:(id)arg0 ;
-(id)attachmentsInDocument;
-(id)fileWrapper;
-(id)init;
-(id)initWithMimeBody:(id)arg0 ;
-(id)initWithMimePart:(id)arg0 ;
-(id)initWithMimePart:(id)arg0 htmlData:(id)arg1 encoding:(unsigned int)arg2 ;
-(id)mimePartForURL:(id)arg0 ;
-(id)preferredCharacterSet;
-(void)dealloc;


@end


#endif