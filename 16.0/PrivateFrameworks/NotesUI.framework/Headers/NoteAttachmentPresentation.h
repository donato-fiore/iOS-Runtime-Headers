// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NOTEATTACHMENTPRESENTATION_H
#define NOTEATTACHMENTPRESENTATION_H

@class NSString, NSURL, NSData, NSError, NSNumber;
@protocol NotesCIDDataProvider;

#import <Foundation/Foundation.h>


@interface NoteAttachmentPresentation : NSObject <NotesCIDDataProvider>



@property (copy, nonatomic) NSString *contentID; // ivar: _contentID
@property (copy, nonatomic) NSURL *contentIDURL; // ivar: _contentIDURL
@property (copy, nonatomic) NSString *contentIDURLAbsoluteString; // ivar: _contentIDURLAbsoluteString
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSURL *dataFileURL; // ivar: _dataFileURL
@property (retain, nonatomic) NSError *dataFileURLError; // ivar: _dataFileURLError
@property (readonly, nonatomic) NSNumber *dataSizeNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *filename; // ivar: _filename
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize iconSize; // ivar: _iconSize
@property (nonatomic, getter=isImage) BOOL image; // ivar: _image
@property (copy, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (readonly, nonatomic) BOOL sourceIsManaged; // ivar: _sourceIsManaged
@property (readonly) Class superclass;


+(id)attachmentPresentationsForAttachments:(id)arg0 ;
+(id)presentationSelector;
+(void)prepareDocumentForPresentationWithAttachmentContentIDs:(id)arg0 withAttachmentPresentations:(id)arg1 occurences:(*id)arg2 ;
// +(void)prepareDocumentForSerializationWithAttachmentContentIDs:(id)arg0 withAttachmentPresentations:(id)arg1 newPresentationProvider:(id)arg2 leftoverPresentations:(unk)arg3  ;
-(BOOL)getData:(*id)arg0 mimeType:(*id)arg1 error:(*id)arg2 ;
-(BOOL)getPresentationData:(*id)arg0 mimeType:(*id)arg1 error:(*id)arg2 ;
-(id)initWithData:(id)arg0 contentID:(id)arg1 mimeType:(id)arg2 filename:(id)arg3 ;
-(id)initWithNoteAttachmentObject:(id)arg0 ;
-(void)clearCache;
-(void)updateContentIDURL;


@end


#endif