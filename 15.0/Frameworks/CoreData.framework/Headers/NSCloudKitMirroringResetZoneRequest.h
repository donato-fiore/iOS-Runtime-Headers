// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCLOUDKITMIRRORINGRESETZONEREQUEST_H
#define NSCLOUDKITMIRRORINGRESETZONEREQUEST_H

@class NSArray;


#import "NSCloudKitMirroringRequest.h"

@interface NSCloudKitMirroringResetZoneRequest : NSCloudKitMirroringRequest {
    NSArray *_recordZoneIDsToReset;
}




-(id)initWithOptions:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif