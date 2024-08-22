// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICLOCALFILEWRAPPER_H
#define ICLOCALFILEWRAPPER_H

@class NSFileWrapper, NSData, NSURL;
@protocol NSSecureCoding;



@interface ICLocalFileWrapper : NSFileWrapper <NSSecureCoding>



@property (retain, nonatomic) NSData *cachedData; // ivar: _cachedData
@property (retain, nonatomic) NSURL *localURL; // ivar: _localURL


+(BOOL)supportsSecureCoding;
-(BOOL)isDirectory;
-(BOOL)isSymbolicLink;
-(BOOL)matchesContentsOfURL:(id)arg0 ;
-(BOOL)readFromURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 options:(NSUInteger)arg1 originalContentsURL:(id)arg2 error:(*id)arg3 ;
-(id)addFileWrapper:(id)arg0 ;
-(id)addRegularFileWithContents:(id)arg0 preferredFilename:(id)arg1 ;
-(id)dataWithError:(*id)arg0 ;
-(id)fileAttributes;
-(id)fileWrappers;
-(id)filename;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalURL:(id)arg0 ;
-(id)keyForFileWrapper:(id)arg0 ;
-(id)preferredFilename;
-(id)regularFileContents;
-(id)serializedRepresentation;
-(id)symbolicLinkDestinationURL;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeFileWrapper:(id)arg0 ;


@end


#endif