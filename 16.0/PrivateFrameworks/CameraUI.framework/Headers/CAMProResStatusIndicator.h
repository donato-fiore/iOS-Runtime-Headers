// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMPRORESSTATUSINDICATOR_H
#define CAMPRORESSTATUSINDICATOR_H



#import "CAMControlStatusIndicator.h"

@interface CAMProResStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, setter=setProResVideoMode:) NSInteger proResVideoMode; // ivar: _proResVideoMode


-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseSlash;
-(id)imageNameForAXHUD;
-(id)imageNameForCurrentState;
-(struct CGSize )intrinsicContentSize;
-(void)setOrientation:(NSInteger)arg0 animated:(BOOL)arg1 ;


@end


#endif