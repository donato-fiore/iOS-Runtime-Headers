// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFPROPERTYANIMATINGPASSTHROUGHVIEW_H
#define SBFPROPERTYANIMATINGPASSTHROUGHVIEW_H

@class SBFTouchPassThroughView, NSArray, NSString;
@protocol SBFCustomImplicitPropertyAnimating;



@interface SBFPropertyAnimatingPassThroughView : SBFTouchPassThroughView <SBFCustomImplicitPropertyAnimating>



@property (copy, nonatomic) NSArray *animatedLayerProperties; // ivar: animatedLayerProperties
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;


@end


#endif