// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMFLASHSTATUSINDICATOR_H
#define CAMFLASHSTATUSINDICATOR_H



#import "CAMControlStatusIndicator.h"

@interface CAMFlashStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, getter=isFlashActive) BOOL flashActive; // ivar: _flashActive
@property (nonatomic) NSInteger flashMode; // ivar: _flashMode
@property (nonatomic, getter=isFlashUnavailable) BOOL flashUnavailable; // ivar: _flashUnavailable


-(BOOL)shouldFillOutlineForCurrentState;
-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(id)imageNameForAXHUD;
-(id)imageNameForCurrentState;


@end


#endif