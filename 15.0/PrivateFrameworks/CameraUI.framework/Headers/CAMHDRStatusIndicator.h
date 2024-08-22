// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMHDRSTATUSINDICATOR_H
#define CAMHDRSTATUSINDICATOR_H



#import "CAMControlStatusIndicator.h"

@interface CAMHDRStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, getter=isAutoHDRAllowed) BOOL autoHDRAllowed; // ivar: _autoHDRAllowed
@property (nonatomic, setter=setHDRMode:) NSInteger hdrMode; // ivar: _hdrMode


-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(id)imageNameForAXHUD;
-(id)imageNameForCurrentState;
-(struct CGSize )intrinsicContentSize;
-(void)setAllowAutoHDR:(BOOL)arg0 ;
-(void)setOrientation:(NSInteger)arg0 animated:(BOOL)arg1 ;


@end


#endif