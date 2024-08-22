// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMESSAGEFILEWRAPPER_H
#define MFMESSAGEFILEWRAPPER_H

@class NSString, NSData, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MFMessageFileWrapper : NSObject {
    NSString *_filename;
    NSString *_preferredFilename;
    NSData *_data;
    NSMutableDictionary *_attributes;
    NSString *_linkDestination;
    NSString *_url;
    int _type;
}


@property (copy, nonatomic) NSString *path; // ivar: _path


-(BOOL)isDirectory;
-(BOOL)isImageFile;
-(BOOL)isPDFFile;
-(BOOL)isPlaceholder;
-(BOOL)isRegularFile;
-(BOOL)isSymbolicLink;
-(BOOL)isUnzippableFile;
-(NSUInteger)fileSize;
-(id)URL;
-(id)contentID;
-(id)description;
-(id)eventUniqueID;
-(id)fileAttributes;
-(id)fileProtection;
-(id)fileWrappers;
-(id)filename;
-(id)icsRepresentation;
-(id)inferredMimeType;
-(id)initRegularFileWithContents:(id)arg0 ;
-(id)initSymbolicLinkWithDestination:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)meetingStorePersistentID;
-(id)messageID;
-(id)mimeType;
-(id)preferredFilename;
-(id)regularFileContents;
-(id)symbolicLinkDestination;
-(unsigned int)creator;
-(unsigned int)type;
-(unsigned short)finderFlags;
-(void)_isImage:(*BOOL)arg0 orPDFFile:(*BOOL)arg1 ;
-(void)dealloc;
-(void)setContentID:(id)arg0 ;
-(void)setCreator:(unsigned int)arg0 ;
-(void)setEventUniqueID:(id)arg0 ;
-(void)setFileAttributes:(id)arg0 ;
-(void)setFileProtection:(id)arg0 ;
-(void)setFilename:(id)arg0 ;
-(void)setFinderFlags:(unsigned short)arg0 ;
-(void)setICSRepresentation:(id)arg0 ;
-(void)setMeetingStorePersistentID:(id)arg0 ;
-(void)setMessageID:(id)arg0 ;
-(void)setMimeType:(id)arg0 ;
-(void)setPreferredFilename:(id)arg0 ;
-(void)setType:(unsigned int)arg0 ;
-(void)setURL:(id)arg0 ;


@end


#endif