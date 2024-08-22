// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFATTACHMENTPLACEHOLDER_H
#define MFATTACHMENTPLACEHOLDER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MFAttachmentPlaceholder : NSObject {
    NSMutableDictionary *_jsonDictionary;
}




+(BOOL)hasPlaceholderRepresentation:(id)arg0 ;
+(BOOL)isPlaceholderSerializedRepresentation:(id)arg0 ;
+(BOOL)setFileProtectionForFileAt:(id)arg0 error:(*id)arg1 ;
+(BOOL)writeData:(id)arg0 forURL:(id)arg1 ;
+(id)_localStoreURLForFileData:(id)arg0 contentID:(id)arg1 ;
+(id)_placeholderMagic;
+(id)attachmentPlaceholderForData:(id)arg0 fileName:(id)arg1 type:(id)arg2 contentID:(id)arg3 ;
+(id)attachmentPlaceholderForFileURL:(id)arg0 fileName:(id)arg1 fileSize:(NSInteger)arg2 type:(id)arg3 contentID:(id)arg4 ;
+(id)dataForPlaceholder:(id)arg0 ;
+(id)placeholder;
+(id)placeholderDirectory;
+(id)placeholderFromSerializedRepresentation:(id)arg0 ;
+(id)placeholderRepresentations:(id)arg0 ;
+(id)serializedPlaceholderForFileName:(id)arg0 fileSize:(NSInteger)arg1 mimeType:(id)arg2 contentID:(id)arg3 ;
+(void)cloneFileAtURL:(id)arg0 toPlaceholderURL:(id)arg1 ;
+(void)removePlaceholder:(id)arg0 ;
+(void)removePlaceholderForFileURL:(id)arg0 ;
-(BOOL)useMailDrop;
-(NSUInteger)fileSize;
-(id)contentID;
-(id)description;
-(id)fileName;
-(id)fileURL;
-(id)fileURLString;
-(id)init;
-(id)mimeType;
-(id)serializedRepresentation;
-(void)_setJSONDictionary:(id)arg0 ;
-(void)setContentID:(id)arg0 ;
-(void)setFileName:(id)arg0 ;
-(void)setFileSize:(NSUInteger)arg0 ;
-(void)setFileURLString:(id)arg0 ;
-(void)setMimeType:(id)arg0 ;
-(void)setUseMailDrop:(BOOL)arg0 ;


@end


#endif