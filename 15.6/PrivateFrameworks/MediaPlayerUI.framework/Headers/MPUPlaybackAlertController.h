// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPUPLAYBACKALERTCONTROLLER_H
#define MPUPLAYBACKALERTCONTROLLER_H

@class UIAlertController, NSError, MPAVItem;



@interface MPUPlaybackAlertController : UIAlertController

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) MPAVItem *item; // ivar: _item
@property (readonly, nonatomic) NSInteger playbackAlertType; // ivar: _playbackAlertType


+(NSInteger)playbackAlertTypeForError:(id)arg0 ;
+(id)contentRestrictedPlaybackAlertControllerForContentType:(NSInteger)arg0 dismissalBlock:(id)arg1 ;
+(id)genericAlertControllerForItem:(id)arg0 error:(id)arg1 dismissalBlock:(id)arg2 ;
+(id)playbackAlertControllerForItem:(id)arg0 contentType:(NSInteger)arg1 error:(id)arg2 dismissalBlock:(id)arg3 ;
+(id)userRemovedAlertControllerForItem:(id)arg0 dismissalBlock:(id)arg1 ;


@end


#endif