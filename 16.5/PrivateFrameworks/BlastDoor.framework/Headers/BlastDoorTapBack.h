// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORTAPBACK_H
#define BLASTDOORTAPBACK_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "BlastDoorTapBack_MessageSummaryInfo.h"

@interface BlastDoorTapBack : NSObject {
    ? tapBack;
}


@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) _NSRange associatedMessageRange;
@property (nonatomic, readonly) NSInteger associatedMessageType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorTapBack_MessageSummaryInfo *messageSummaryInfo;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) NSString *plainTextBody;


-(id)init;


@end


#endif