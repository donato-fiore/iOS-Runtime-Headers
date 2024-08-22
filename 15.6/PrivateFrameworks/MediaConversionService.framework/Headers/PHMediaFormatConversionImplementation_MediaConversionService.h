// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHMEDIAFORMATCONVERSIONIMPLEMENTATION_MEDIACONVERSIONSERVICE_H
#define PHMEDIAFORMATCONVERSIONIMPLEMENTATION_MEDIACONVERSIONSERVICE_H

@class NSString, NSSet;
@protocol PHMediaFormatConversionImplementation;

#import <Foundation/Foundation.h>

#import "PAImageConversionServiceClient.h"
#import "PAVideoConversionServiceClient.h"

@interface PHMediaFormatConversionImplementation_MediaConversionService : NSObject <PHMediaFormatConversionImplementation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) PAImageConversionServiceClient *imageConversionServiceClient; // ivar: _imageConversionServiceClient
@property (readonly) Class superclass;
@property (readonly) NSInteger transferBehaviorUserPreference;
@property (readonly) NSSet *ut_objectsToBeDeallocatedWithReceiver;
@property (retain) PAVideoConversionServiceClient *videoConversionServiceClient; // ivar: _videoConversionServiceClient


-(id)init;
-(id)submitNonSinglePassVideoConversionRequest:(id)arg0 destination:(id)arg1 completionHandler:(id)arg2 ;
-(id)submitSinglePassVideoConversionRequest:(id)arg0 destination:(id)arg1 completionHandler:(id)arg2 ;
-(void)applyCommonOptionsFromRequest:(id)arg0 toOptions:(id)arg1 ;
-(void)applyCommonOptionsFromVideoRequest:(id)arg0 toOptions:(id)arg1 ;
-(void)dealloc;
-(void)performConversionRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performImageConversionRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performVideoConversionRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif