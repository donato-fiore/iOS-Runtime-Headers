// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINTERFACEACTIONGROUPVIEWSTATE_H
#define UIINTERFACEACTIONGROUPVIEWSTATE_H

@protocol NSCopying;


#import "UIInterfaceActionVisualStyleViewState.h"

@interface UIInterfaceActionGroupViewState : UIInterfaceActionVisualStyleViewState <NSCopying>



@property (readonly, nonatomic) BOOL isVerticalLayoutAxis; // ivar: _isVerticalLayoutAxis
@property (readonly, nonatomic) NSInteger resolvedPresentationStyle; // ivar: _resolvedPresentationStyle


-(BOOL)_stateEqualToGroupViewState:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithResolvedPresentationStyle:(NSInteger)arg0 ;
-(id)copyWithVerticalLayoutAxis:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)_collectStateFromGroupViewState:(id)arg0 ;


@end


#endif