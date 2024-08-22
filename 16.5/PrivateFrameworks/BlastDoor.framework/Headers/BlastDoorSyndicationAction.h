// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORSYNDICATIONACTION_H
#define BLASTDOORSYNDICATIONACTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorGroupContext.h"

@interface BlastDoorSyndicationAction : NSObject {
    ? syndicationAction;
}


@property (nonatomic, readonly) unsigned char actionType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSUInteger encodedSyndicationStartDate;
@property (nonatomic, readonly) BlastDoorGroupContext *groupContext;
@property (nonatomic, readonly) unsigned char itemType;
@property (nonatomic, readonly) NSString *messagePartGUID;
@property (nonatomic, readonly) _NSRange syndicatedMessagePartRange;
@property (nonatomic, readonly) unsigned char version;


-(id)init;


@end


#endif