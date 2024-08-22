// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NOTEATTACHMENTOBJECT_H
#define NOTEATTACHMENTOBJECT_H

@class NSManagedObject, NSString;


#import "NoteObject.h"

@interface NoteAttachmentObject : NSManagedObject

@property (retain, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NoteObject *note;


+(BOOL)applyFileAttributesForAttachment:(id)arg0 error:(*id)arg1 ;
+(BOOL)migrateAttachmentRelatedFilesInContext:(id)arg0 error:(*id)arg1 ;
+(BOOL)migrateFileForAttachment:(id)arg0 toCurrentAttachmentPathWithError:(*id)arg1 ;
+(id)attachmentDirectoryPathForAttachmentObjectID:(id)arg0 error:(*id)arg1 ;
+(id)attachmentDirectoryURLForAttachmentObjectID:(id)arg0 error:(*id)arg1 ;
-(BOOL)persistAttachmentData:(id)arg0 error:(*id)arg1 ;
-(id)attachmentDataFileURLWithError:(*id)arg0 ;
-(id)attachmentDataWithError:(*id)arg0 ;
-(void)prepareForDeletion;


@end


#endif