// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOPACKAGEANALYZERDELEGATEADAPTER_H
#define HMIVIDEOPACKAGEANALYZERDELEGATEADAPTER_H

@class HMFObject;
@protocol HMIVideoPackageAnalyzerDelegate;



@interface HMIVideoPackageAnalyzerDelegateAdapter : HMFObject <HMIVideoPackageAnalyzerDelegate>



@property (copy) id *packageAnalyzerDidDetectPackages; // ivar: _packageAnalyzerDidDetectPackages


-(void)packageAnalyzer:(id)arg0 didDetectPackagesWithResult:(id)arg1 error:(id)arg2 ;


@end


#endif