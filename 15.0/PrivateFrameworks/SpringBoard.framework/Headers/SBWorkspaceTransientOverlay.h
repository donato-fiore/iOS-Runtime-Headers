// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWORKSPACETRANSIENTOVERLAY_H
#define SBWORKSPACETRANSIENTOVERLAY_H



#import "SBWorkspaceEntity.h"
#import "SBTransientOverlayViewController.h"

@interface SBWorkspaceTransientOverlay : SBWorkspaceEntity

@property (readonly, nonatomic) SBTransientOverlayViewController *viewController; // ivar: _viewController


-(id)_generator:(SEL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithViewController:(id)arg0 ;


@end


#endif