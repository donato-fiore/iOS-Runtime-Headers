// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICREMOTEFILEWRAPPER_H
#define ICREMOTEFILEWRAPPER_H

@class NSFileWrapper, NSData, NSURL;
@protocol NSSecureCoding;



@interface ICRemoteFileWrapper : NSFileWrapper <NSSecureCoding>



@property (retain, nonatomic) NSData *cachedData; // ivar: _cachedData
@property (retain, nonatomic) NSURL *remoteURL; // ivar: _remoteURL


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
-(id)initWithRemoteURL:(id)arg0 ;
-(id)keyForFileWrapper:(id)arg0 ;
-(id)preferredFilename;
-(id)regularFileContents;
-(id)serializedRepresentation;
-(id)symbolicLinkDestinationURL;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeFileWrapper:(id)arg0 ;


@end


#endif