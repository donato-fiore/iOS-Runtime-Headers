// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKZIPOPERATION_H
#define CRKZIPOPERATION_H

@class CATOperation, NSURL;



@interface CRKZipOperation : CATOperation

@property (readonly, nonatomic) NSURL *destinationZipFileURL; // ivar: _destinationZipFileURL
@property (readonly, nonatomic) NSURL *directoryURL; // ivar: _directoryURL


-(BOOL)createDestinationDirectoryWithError:(*id)arg0 ;
-(BOOL)populateArchive:(struct archive *)arg0 error:(*id)arg1 ;
-(BOOL)populateArchive:(struct archive *)arg0 usingDisk:(struct archive *)arg1 error:(*id)arg2 ;
-(BOOL)validateParametersWithError:(*id)arg0 ;
-(BOOL)writeArchiveOfDirectoryAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeDataForFTSEntry:(id)arg0 toArchive:(struct archive *)arg1 fileDescriptor:(int)arg2 error:(*id)arg3 ;
-(BOOL)writeDataFromFileDescriptor:(int)arg0 toArchive:(struct archive *)arg1 usingBuffer:(id)arg2 error:(*id)arg3 ;
-(BOOL)writeFTSEntry:(id)arg0 toArchive:(struct archive *)arg1 usingDisk:(struct archive *)arg2 error:(*id)arg3 ;
-(BOOL)writeHeaderForFTSEntry:(id)arg0 toArchive:(struct archive *)arg1 usingDisk:(struct archive *)arg2 fileDescriptor:(int)arg3 error:(*id)arg4 ;
-(NSInteger)lengthOfBufferForFileDescriptor:(int)arg0 stat:(struct stat )arg1 ;
-(char *)relativePathForPathOnDisk:(id)arg0 ;
-(id)errorFromArchive:(struct archive *)arg0 ;
-(id)initWithDirectoryURL:(id)arg0 ;
-(id)initWithDirectoryURL:(id)arg0 destinationZipName:(id)arg1 ;
-(id)initWithDirectoryURL:(id)arg0 destinationZipURL:(id)arg1 ;
-(struct archive *)makeArchiveWithError:(*id)arg0 ;
-(void)finalizeArchive:(struct archive *)arg0 ;
-(void)main;


@end


#endif