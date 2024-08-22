// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARATTRIBUTEEDITORCATEGORY_H
#define AVTAVATARATTRIBUTEEDITORCATEGORY_H

@class NSString, NSArray, NSDictionary;
@protocol AVTPresetResourcesProviding;

#import <Foundation/Foundation.h>

#import "AVTCoreModelGroup.h"
#import "AVTAvatarAttributeEditorPreviewMode.h"

@interface AVTAvatarAttributeEditorCategory : NSObject <AVTPresetResourcesProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) AVTCoreModelGroup *modelGroup; // ivar: _modelGroup
@property (readonly, nonatomic) AVTAvatarAttributeEditorPreviewMode *previewMode; // ivar: _previewMode
@property (readonly, copy, nonatomic) NSArray *sectionProviders; // ivar: _sectionProviders
@property (readonly, copy, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *symbolNameProvider;
@property (readonly, copy, nonatomic) NSDictionary *symbolNames; // ivar: _symbolNames


-(id)initWithSectionProviders:(id)arg0 localizedName:(id)arg1 previewMode:(id)arg2 modelGroup:(id)arg3 symbolNames:(id)arg4 ;
-(id)representedAVTPresetResources;


@end


#endif