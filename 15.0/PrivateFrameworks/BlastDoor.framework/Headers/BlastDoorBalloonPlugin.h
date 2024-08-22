// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLASTDOORBALLOONPLUGIN_H
#define BLASTDOORBALLOONPLUGIN_H

@class NSString, NSArray, NSAttributedString;

#import <Foundation/Foundation.h>

#import "BlastDoorBalloonPluginPayloadWrapper.h"

@interface BlastDoorBalloonPlugin : NSObject {
    ? balloonPlugin;
}


@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) _NSRange associatedMessageRange;
@property (nonatomic, readonly) NSInteger associatedMessageType;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) NSArray *attributionInfo;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_associatedMessageRange;
@property (nonatomic, readonly) BOOL has_associatedMessageType;
@property (nonatomic, readonly) BOOL isExpirable;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) BlastDoorBalloonPluginPayloadWrapper *payload;
@property (nonatomic, readonly) NSString *plainTextBody;


-(id)init;


@end


#endif