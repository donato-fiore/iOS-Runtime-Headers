// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIANALYSISSERVICE_H
#define HMIANALYSISSERVICE_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIAnalysisService : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)cancelRequest:(int)arg0 ;
-(id)expectedClasses;
-(id)init;
-(int)requestAnalysisForAssetData:(id)arg0 withProperties:(id)arg1 andCompletionHandler:(id)arg2 ;
-(int)requestAnalysisForPixelBuffer:(struct __CVBuffer *)arg0 withProperties:(id)arg1 andCompletionHandler:(id)arg2 ;


@end


#endif