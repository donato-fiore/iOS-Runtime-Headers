// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITUNHANDLEDPARTIALERRORMETRIC_H
#define PFCLOUDKITUNHANDLEDPARTIALERRORMETRIC_H

@class NSNumber, NSString;


#import "PFCloudKitBaseMetric.h"

@interface PFCloudKitUnhandledPartialErrorMetric : PFCloudKitBaseMetric {
    NSNumber *_errorCode;
    NSString *_errorDomain;
}




-(id)initWithContainerIdentifier:(id)arg0 error:(id)arg1 ;
-(id)name;
-(id)payload;
-(void)dealloc;


@end


#endif