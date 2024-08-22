// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITFATALERRORMETRIC_H
#define PFCLOUDKITFATALERRORMETRIC_H

@class NSString;


#import "PFCloudKitUnhandledPartialErrorMetric.h"

@interface PFCloudKitFatalErrorMetric : PFCloudKitUnhandledPartialErrorMetric {
    NSString *_requestClass;
}




-(id)initWithContainerIdentifier:(id)arg0 result:(id)arg1 ;
-(id)name;
-(id)payload;
-(void)dealloc;


@end


#endif