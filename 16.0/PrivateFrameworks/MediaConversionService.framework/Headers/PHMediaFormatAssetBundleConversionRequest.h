// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHMEDIAFORMATASSETBUNDLECONVERSIONREQUEST_H
#define PHMEDIAFORMATASSETBUNDLECONVERSIONREQUEST_H

@class NSArray;


#import "PHMediaFormatConversionCompositeRequest.h"

@interface PHMediaFormatAssetBundleConversionRequest : PHMediaFormatConversionCompositeRequest

@property (retain) NSArray *subrequests; // ivar: _subrequests


-(BOOL)prepareWithError:(*id)arg0 ;
-(BOOL)requiresFormatConversion;
-(BOOL)requiresMetadataChanges;
-(id)outputFileType;
-(id)outputPathExtension;
-(void)enqueueSubrequestsOnConversionManager:(id)arg0 ;
-(void)enumerateSubrequests:(id)arg0 ;
-(void)postProcessSuccessfulCompositeRequest;


@end


#endif