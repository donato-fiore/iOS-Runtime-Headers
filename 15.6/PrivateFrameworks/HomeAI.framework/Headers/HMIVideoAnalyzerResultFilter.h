// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOANALYZERRESULTFILTER_H
#define HMIVIDEOANALYZERRESULTFILTER_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIVideoAnalyzerResultFilter : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)applyWithFrameResult:(id)arg0 ;
-(id)initWith;


@end


#endif