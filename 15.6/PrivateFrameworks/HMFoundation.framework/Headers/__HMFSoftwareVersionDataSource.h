// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __HMFSOFTWAREVERSIONDATASOURCE_H
#define __HMFSOFTWAREVERSIONDATASOURCE_H

@class NSString;
@protocol HMFSystemInfoSoftwareVersionDataSource;


#import "HMFObject.h"
#import "HMFSoftwareVersion.h"

@interface __HMFSoftwareVersionDataSource : HMFObject <HMFSystemInfoSoftwareVersionDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (readonly) Class superclass;




@end


#endif