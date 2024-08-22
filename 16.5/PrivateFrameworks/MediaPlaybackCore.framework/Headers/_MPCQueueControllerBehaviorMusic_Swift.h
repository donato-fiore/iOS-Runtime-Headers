// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCQUEUECONTROLLERBEHAVIORMUSIC_SWIFT_H
#define _MPCQUEUECONTROLLERBEHAVIORMUSIC_SWIFT_H

@protocol MPShuffleableSectionedIdentifierListDataSource;

#import <Foundation/Foundation.h>


@interface _MPCQueueControllerBehaviorMusic_Swift : NSObject <MPShuffleableSectionedIdentifierListDataSource>

 {
    ? behavior;
    ? pendingPodDescriptors;
    ? queueLoader;
}




-(?)_addInitialPlaybackContextcompletion;
-(?)_insertPlaybackContext:(?)arg0 intoAutoPlayIdentifierList:(?)arg1 atPosition:(?)arg2 afterContentItemIDcompletion;
-(?)firstContentItemIDForIdentifierscompletion;
-(?)reloadSectioncompletion;
-(BOOL)canJumpToSection:(id)arg0 item:(id)arg1 ;
-(BOOL)canNextTrackFromSection:(id)arg0 item:(id)arg1 ;
-(BOOL)canPreviousTrackFromSection:(id)arg0 item:(id)arg1 ;
-(BOOL)isLoadingAdditionalItemsForSection:(id)arg0 ;
-(BOOL)isRadioContainerForSection:(id)arg0 ;
-(BOOL)isValidSection:(id)arg0 ;
-(BOOL)section:(id)arg0 supportsShuffleType:(NSInteger)arg1 ;
-(BOOL)shouldUsePlaceholderForSection:(id)arg0 ;
-(BOOL)shouldUsePlaceholderForSection:(id)arg0 item:(id)arg1 ;
-(id)_hashedDSIDForAutoPlay;
-(id)init;
-(id)initWithBehavior:(id)arg0 ;
-(id)peekMetadataObjectForSection:(id)arg0 ;
-(id)peekMetadataObjectForSection:(id)arg0 item:(id)arg1 ;


@end


#endif