// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BUZIPENTRY_H
#define BUZIPENTRY_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface BUZipEntry : NSObject

@property (nonatomic) unsigned int CRC; // ivar: _CRC
@property (copy, nonatomic) NSString *collapsedName; // ivar: _collapsedName
@property (nonatomic, getter=isCompressed) BOOL compressed; // ivar: _compressed
@property (nonatomic) NSUInteger compressedSize; // ivar: _compressedSize
@property (nonatomic) unsigned int externalFileAttributes; // ivar: _externalFileAttributes
@property (nonatomic) unsigned short extraFieldsLength; // ivar: _extraFieldsLength
@property (nonatomic) NSUInteger fileHeaderLength; // ivar: _fileHeaderLength
@property (copy, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned short nameLength; // ivar: _nameLength
@property (nonatomic) NSUInteger offset; // ivar: _offset
@property (nonatomic) NSUInteger size; // ivar: _size
@property (readonly, nonatomic, getter=isSymLink) BOOL symLink;


-(BOOL)extractFromArchive:(id)arg0 destinationURL:(id)arg1 error:(*id)arg2 ;
-(id)_dataFromArchive:(id)arg0 error:(*id)arg1 ;
-(id)_extractFromArchiveData:(id)arg0 destinationURL:(id)arg1 allowEntriesOutsideRoot:(BOOL)arg2 error:(*id)arg3 ;
-(id)dataFromArchive:(id)arg0 ;
-(id)description;
-(id)extractFromArchive:(id)arg0 ;
-(id)plistFromArchive:(id)arg0 ;
-(id)stringFromArchive:(id)arg0 ;
-(id)usableName;
-(struct _xmlDoc *)xmlDocumentFromArchive:(id)arg0 ;
-(void)_beginStreamingWriteForArchive:(id)arg0 forDestinationURL:(id)arg1 completion:(id)arg2 ;


@end


#endif