// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCLOUDKITMIRRORINGEXPORTPROGRESSREQUEST_H
#define NSCLOUDKITMIRRORINGEXPORTPROGRESSREQUEST_H

@class NSSet;


#import "NSCloudKitMirroringRequest.h"

@interface NSCloudKitMirroringExportProgressRequest : NSCloudKitMirroringRequest

@property (copy, nonatomic) NSSet *objectIDsToFetch; // ivar: _objectIDsToFetch


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOptions:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif