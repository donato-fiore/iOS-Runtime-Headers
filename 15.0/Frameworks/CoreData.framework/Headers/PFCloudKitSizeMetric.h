// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCLOUDKITSIZEMETRIC_H
#define PFCLOUDKITSIZEMETRIC_H

@class NSNumber;


#import "PFCloudKitBaseMetric.h"

@interface PFCloudKitSizeMetric : PFCloudKitBaseMetric {
    NSNumber *_sizeInBytes;
}




-(id)initWithContainerIdentifier:(id)arg0 ;
-(id)payload;
-(void)dealloc;


@end


#endif