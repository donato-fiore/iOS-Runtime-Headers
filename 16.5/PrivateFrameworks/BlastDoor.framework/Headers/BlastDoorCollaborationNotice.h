// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORCOLLABORATIONNOTICE_H
#define BLASTDOORCOLLABORATIONNOTICE_H

@class NSString, NSData, NSDate;

#import <Foundation/Foundation.h>


@interface BlastDoorCollaborationNotice : NSObject {
    ? collaborationNotice;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *guidString;
@property (nonatomic, readonly) NSData *highlightEvent;
@property (nonatomic, readonly) NSUInteger highlightEventType;
@property (nonatomic, readonly) NSDate *noticeDate;
@property (nonatomic, readonly) NSInteger version;


-(id)init;


@end


#endif