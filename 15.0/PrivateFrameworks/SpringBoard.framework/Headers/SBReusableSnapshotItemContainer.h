// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBREUSABLESNAPSHOTITEMCONTAINER_H
#define SBREUSABLESNAPSHOTITEMCONTAINER_H

@class NSString;
@protocol SBFluidSwitcherItemContainerReusable;


#import "SBFluidSwitcherItemContainer.h"

@interface SBReusableSnapshotItemContainer : SBFluidSwitcherItemContainer <SBFluidSwitcherItemContainerReusable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_snapshotView;
-(id)initWithFrame:(struct CGRect )arg0 appLayout:(id)arg1 delegate:(id)arg2 active:(BOOL)arg3 ;
-(void)_updateSnapshotViewWithAppLayout:(id)arg0 ;
-(void)conformsToProtocolSBFluidSwitcherItemContainerReusable;
-(void)prepareForReuse;
-(void)setAppLayout:(id)arg0 ;
-(void)setContentView:(id)arg0 ;


@end


#endif