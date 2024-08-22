// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIWINDOWSCENEACTIVATIONEFFECTDESCRIPTOR_H
#define _UIWINDOWSCENEACTIVATIONEFFECTDESCRIPTOR_H

@class NSArray, NSString;
@protocol _UIContentEffectDescriptor;

#import <Foundation/Foundation.h>

#import "UITargetedPreview.h"

@interface _UIWindowSceneActivationEffectDescriptor : NSObject <_UIContentEffectDescriptor>



@property (readonly, nonatomic) NSArray *compatibleDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITargetedPreview *targetedPreview; // ivar: _targetedPreview


+(id)descriptorWithPreview:(id)arg0 ;
-(BOOL)canTransitionInPlaceToEffectWithDescriptor:(id)arg0 ;


@end


#endif