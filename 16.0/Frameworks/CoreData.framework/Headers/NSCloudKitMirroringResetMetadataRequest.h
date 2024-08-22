// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCLOUDKITMIRRORINGRESETMETADATAREQUEST_H
#define NSCLOUDKITMIRRORINGRESETMETADATAREQUEST_H

@class NSSet;


#import "NSCloudKitMirroringRequest.h"

@interface NSCloudKitMirroringResetMetadataRequest : NSCloudKitMirroringRequest

@property (copy, nonatomic) NSSet *objectIDsToReset; // ivar: _objectIDsToReset


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif