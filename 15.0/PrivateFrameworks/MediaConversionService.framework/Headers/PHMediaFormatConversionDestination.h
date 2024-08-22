// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHMEDIAFORMATCONVERSIONDESTINATION_H
#define PHMEDIAFORMATCONVERSIONDESTINATION_H

@class NSURL, NSString, PFVideoExportRangeCoordinator;


#import "PHMediaFormatConversionContent.h"

@interface PHMediaFormatConversionDestination : PHMediaFormatConversionContent {
    NSURL *_temporaryFilesURLToDelete;
    NSURL *_temporaryOutputDirectoryURL;
    NSURL *_temporaryOutputFileURL;
}


@property (retain) NSString *outputPathExtension; // ivar: _outputPathExtension
@property NSUInteger singlePassVideoConversionTargetLength; // ivar: _singlePassVideoConversionTargetLength
@property (retain) PFVideoExportRangeCoordinator *singlePassVideoExportRangeCoordinator; // ivar: _singlePassVideoExportRangeCoordinator
@property (readonly) NSURL *temporaryOutputDirectoryURL;
@property (readonly) NSURL *temporaryOutputFileURL;
@property (readonly) BOOL usesSinglePassVideoConversion;


+(id)destinationForConversionReturningUnchangedSource:(id)arg0 ;
+(id)sharedCleanupQueue;
-(BOOL)createTemporaryOutputDirectoryWithError:(*id)arg0 ;
-(BOOL)createTemporaryOutputFileWithErrorError:(*id)arg0 ;
-(BOOL)padImageToLength:(NSUInteger)arg0 fileHandle:(id)arg1 error:(*id)arg2 ;
-(BOOL)padToLength:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)padVideoToLength:(NSUInteger)arg0 fileHandle:(id)arg1 error:(*id)arg2 ;
-(BOOL)waitForAvailabilityOfRange:(struct _NSRange )arg0 timeout:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)length;
-(id)errorForSinglePassVideoConversionError:(id)arg0 ;
-(id)temporaryDirectoryPrefix;
-(void)addAvailableRange:(struct _NSRange )arg0 ;
-(void)dealloc;
-(void)enableSinglePassVideoConversionWithTargetLength:(NSUInteger)arg0 ;
-(void)generateTemporaryOutputFileURLForRequest:(id)arg0 ;
-(void)removeTemporaryFiles;
-(void)removeTemporaryFilesWithCompletionHandler:(id)arg0 ;


@end


#endif