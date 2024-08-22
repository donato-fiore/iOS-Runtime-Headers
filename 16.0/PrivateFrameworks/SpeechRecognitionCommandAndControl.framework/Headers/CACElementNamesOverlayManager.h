// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACELEMENTNAMESOVERLAYMANAGER_H
#define CACELEMENTNAMESOVERLAYMANAGER_H

@protocol CACElementNamesOverlayManagerDelegate;


#import "CACSimpleContentViewManager.h"

@interface CACElementNamesOverlayManager : CACSimpleContentViewManager

@property (weak, nonatomic) NSObject<CACElementNamesOverlayManagerDelegate> *delegate; // ivar: _delegate


-(BOOL)isOverlay;
-(id)voiceOverDescriptions;
-(void)showNamesForElements:(id)arg0 ;
-(void)startDelayedDimmingOfNumbers;
-(void)stopDelayedDimmingOfNumbers;


@end


#endif