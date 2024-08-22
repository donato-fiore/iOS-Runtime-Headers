// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFHOMEANNOUNCEMENTSNAPSHOTMUTATION_H
#define _AFHOMEANNOUNCEMENTSNAPSHOTMUTATION_H

@class NSString;
@protocol AFHomeAnnouncementSnapshotMutating;

#import <Foundation/Foundation.h>

#import "AFHomeAnnouncementSnapshot.h"
#import "AFHomeAnnouncement.h"

@interface _AFHomeAnnouncementSnapshotMutation : NSObject <AFHomeAnnouncementSnapshotMutating>

 {
    AFHomeAnnouncementSnapshot *_base;
    NSUInteger _state;
    AFHomeAnnouncement *_lastPlayedAnnouncement;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSUInteger)getState;
-(id)getLastPlayedAnnouncement;
-(id)initWithBase:(id)arg0 ;
-(void)setLastPlayedAnnouncement:(id)arg0 ;
-(void)setState:(NSUInteger)arg0 ;


@end


#endif