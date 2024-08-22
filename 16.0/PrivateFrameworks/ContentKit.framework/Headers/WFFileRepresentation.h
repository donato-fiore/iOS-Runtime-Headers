// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFFILEREPRESENTATION_H
#define WFFILEREPRESENTATION_H

@class NSDate, NSData, NSURL, NSString, WFFileType;


#import "WFRepresentation.h"

@interface WFFileRepresentation : WFRepresentation

@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) BOOL deletesFileOnDeallocation; // ivar: _deletesFileOnDeallocation
@property (readonly, nonatomic) NSInteger fileSize;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (retain, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic) BOOL isTemporaryFile; // ivar: _isTemporaryFile
@property (readonly, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, nonatomic) NSURL *originalURL; // ivar: _originalURL
@property (readonly, nonatomic) NSInteger representationType;
@property (readonly, nonatomic) BOOL securityScopedResource; // ivar: _securityScopedResource
@property (readonly, nonatomic) NSString *wfName; // ivar: _wfName
@property (readonly, nonatomic) WFFileType *wfType; // ivar: _wfType


+(BOOL)coordinateFileOperation:(NSUInteger)arg0 shouldCoordinate:(BOOL)arg1 fileURL:(id)arg2 destinationURL:(id)arg3 accessor:(id)arg4 ;
+(BOOL)fileIsInDisallowedDirectory:(id)arg0 ;
+(BOOL)isAllowedToRepresentFileURL:(id)arg0 ;
+(BOOL)sandboxAllowsRepresentingFileURL:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)disallowedDirectoryURLs;
+(id)fileWithData:(id)arg0 ofType:(id)arg1 proposedFilename:(id)arg2 ;
+(id)fileWithData:(id)arg0 ofType:(id)arg1 proposedFilename:(id)arg2 originalURL:(id)arg3 ;
+(id)fileWithURL:(id)arg0 options:(NSInteger)arg1 ;
+(id)fileWithURL:(id)arg0 options:(NSInteger)arg1 ofType:(id)arg2 ;
+(id)fileWithURL:(id)arg0 options:(NSInteger)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 ;
+(id)fileWithURL:(id)arg0 options:(NSInteger)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 originalURL:(id)arg4 ;
+(id)proposedFilenameForFile:(id)arg0 ofType:(id)arg1 ;
+(id)proposedFilenameForFile:(id)arg0 ofType:(id)arg1 unsanitizedName:(*id)arg2 ;
+(id)sanitizedFilename:(id)arg0 withExtension:(id)arg1 ;
+(id)sanitizedFilename:(id)arg0 withExtension:(id)arg1 unsanitizedName:(*id)arg2 ;
+(id)typeOfData:(id)arg0 ;
+(id)typeOfFile:(id)arg0 ;
+(void)addDisallowedDirectory:(id)arg0 ;
-(BOOL)isEncodable;
-(BOOL)writeToFileURL:(id)arg0 copy:(BOOL)arg1 overwrite:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)writeToFileURL:(id)arg0 overwriting:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)writeToTemporaryFileURL:(id)arg0 error:(*id)arg1 ;
-(id)copyWithName:(id)arg0 addingExtensionIfNecessary:(BOOL)arg1 zone:(struct _NSZone *)arg2 ;
-(id)copyWithName:(id)arg0 zone:(struct _NSZone *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ofType:(id)arg1 proposedFilename:(id)arg2 originalURL:(id)arg3 ;
-(id)initWithFileURL:(id)arg0 options:(NSInteger)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 originalURL:(id)arg4 ;
-(id)inputStream;
-(id)mappedData;
-(id)mappedDataWithError:(*id)arg0 ;
-(id)typeForUserEnteredName:(id)arg0 addingExtensionIfNecessary:(BOOL)arg1 ;
-(id)updatedFilenameForUserEnteredName:(id)arg0 addingExtensionIfNecessary:(BOOL)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif