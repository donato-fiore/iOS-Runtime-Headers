// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORTEXTMESSAGE_MESSAGESUMMARYINFO_H
#define BLASTDOORTEXTMESSAGE_MESSAGESUMMARYINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorTextMessage_MessageSummaryInfo : NSObject {
    ? textMessage_MessageSummaryInfo;
}


@property (nonatomic, readonly) NSString *associatedBalloonBundleID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL hasBeenRetried;
@property (nonatomic, readonly) BOOL has_hasBeenRetried;
@property (nonatomic, readonly) BOOL has_updatedDateWithServerTime;
@property (nonatomic, readonly) NSString *sourceApplicationID;
@property (nonatomic, readonly) BOOL updatedDateWithServerTime;


-(id)init;


@end


#endif