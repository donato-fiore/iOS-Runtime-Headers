// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDIACONVERSIONSERVICECOMMANDLINEDRIVER_H
#define MEDIACONVERSIONSERVICECOMMANDLINEDRIVER_H

@class NSMutableArray, NSProgress;

#import <Foundation/Foundation.h>

#import "PAImageConversionServiceClient.h"
#import "PAVideoConversionServiceClient.h"

@interface MediaConversionServiceCommandLineDriver : NSObject

@property (retain) NSMutableArray *conversionOptionSets; // ivar: _conversionOptionSets
@property (retain) NSProgress *conversionProgress; // ivar: _conversionProgress
@property (retain) PAImageConversionServiceClient *imageConversionServiceClient; // ivar: _imageConversionServiceClient
@property BOOL launchServiceAtStart; // ivar: _launchServiceAtStart
@property BOOL pauseAfterLaunchingService; // ivar: _pauseAfterLaunchingService
@property BOOL pauseAtStart; // ivar: _pauseAtStart
@property BOOL replaceExistingOutput; // ivar: _replaceExistingOutput
@property BOOL showProgress; // ivar: _showProgress
@property BOOL verbose; // ivar: _verbose
@property (retain) PAVideoConversionServiceClient *videoConversionServiceClient; // ivar: _videoConversionServiceClient
@property BOOL waitForSignalAfterCompletion; // ivar: _waitForSignalAfterCompletion


+(BOOL)outputJSONDataForConversionOutputInformation:(id)arg0 ;
+(char *)optstring;
+(id)replacementObjectForObject:(id)arg0 valueConversionHandler:(id)arg1 ;
+(id)usage;
+(id)usagesummary;
+(struct option *)longopts;
+(void)output:(id)arg0 ;
+(void)outputConversionError:(id)arg0 status:(NSInteger)arg1 ;
+(void)outputError:(id)arg0 ;
-(BOOL)hasConversionOfType:(id)arg0 ;
-(BOOL)processOption:(int)arg0 arg:(id)arg1 ;
-(id)init;
-(int)run;
-(int)runImageConversionWithConversionOptionSet:(id)arg0 ;
-(int)runVideoConversionWithConversionOptionSet:(id)arg0 ;
-(int)runVideoStillExtractionConversionWithConversionOptionSet:(id)arg0 ;
-(int)validateAndProcessArgumentValues;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)sendMessageToLaunchService;
-(void)waitForSigInt;


@end


#endif