// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORTYPINGINDICATOR_H
#define BLASTDOORTYPINGINDICATOR_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "BlastDoorTypingIndicator_Icon.h"

@interface BlastDoorTypingIndicator : NSObject {
    ? typingIndicator;
}


@property (nonatomic, readonly) NSString *balloonPluginBundleID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorTypingIndicator_Icon *icon;
@property (nonatomic, readonly) BOOL isFinished;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;


-(id)init;


@end


#endif