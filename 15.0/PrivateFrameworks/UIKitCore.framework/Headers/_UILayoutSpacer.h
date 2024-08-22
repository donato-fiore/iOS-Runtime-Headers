// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UILAYOUTSPACER_H
#define _UILAYOUTSPACER_H

@class NSString, NSArray, NSLayoutYAxisAnchor, NSLayoutDimension;
@protocol UILayoutSupport;


#import "UILayoutGuide.h"

@interface _UILayoutSpacer : UILayoutGuide <UILayoutSupport>



@property (copy, nonatomic, setter=_setArchivedIdentifier:) NSString *_archivedIdentifier;
@property (nonatomic, setter=_setCompatibilityGuideAllowsArchivingAsSubview:) BOOL _compatibilityGuideAllowsArchivingAsSubview; // ivar: _compatibilityGuideAllowsArchivingAsSubview
@property (copy, nonatomic, setter=_setConstraintsToRemoveAtRuntime:) NSArray *_constraintsToRemoveAtRuntime; // ivar: _constraintsToRemoveAtRuntime
@property (nonatomic, getter=_isHorizontal, setter=_setHorizontal:) BOOL _horizontal; // ivar: _horizontal
@property (readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSLayoutDimension *heightAnchor;
@property (readonly, nonatomic) CGFloat length;
@property (readonly) Class superclass;
@property (readonly) NSLayoutYAxisAnchor *topAnchor;


+(id)_horizontalLayoutSpacer;
+(id)_verticalLayoutSpacer;
-(id)_layoutVariablesWithAmbiguousValue;
-(id)initWithCoder:(id)arg0 ;
-(void)_setUpCounterDimensionConstraint;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif