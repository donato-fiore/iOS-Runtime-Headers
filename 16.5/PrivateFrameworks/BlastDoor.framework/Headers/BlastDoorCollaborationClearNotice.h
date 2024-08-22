// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORCOLLABORATIONCLEARNOTICE_H
#define BLASTDOORCOLLABORATIONCLEARNOTICE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface BlastDoorCollaborationClearNotice : NSObject {
    ? collaborationClearNotice;
}


@property (nonatomic, readonly) NSString *collaborationId;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *guidString;
@property (nonatomic, readonly) NSInteger version;


-(id)init;


@end


#endif