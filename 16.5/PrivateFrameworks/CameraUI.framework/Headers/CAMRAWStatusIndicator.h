// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMRAWSTATUSINDICATOR_H
#define CAMRAWSTATUSINDICATOR_H



#import "CAMControlStatusIndicator.h"

@interface CAMRAWStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, setter=setRAWMode:) NSInteger rawMode; // ivar: _rawMode


-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseSlash;
-(id)imageNameForAXHUD;
-(id)imageNameForCurrentState;
-(struct CGSize )intrinsicContentSize;
-(void)setOrientation:(NSInteger)arg0 animated:(BOOL)arg1 ;


@end


#endif