// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDDCLOUDKITSCHEDULEACTIVITYMESSAGE_H
#define CDDCLOUDKITSCHEDULEACTIVITYMESSAGE_H

@class NSString;


#import "CDDCloudKitMessage.h"

@interface CDDCloudKitScheduleActivityMessage : CDDCloudKitMessage {
    NSUInteger _activityType;
    NSString *_storePath;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif