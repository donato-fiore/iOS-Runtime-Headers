// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTVISUALSTYLESET_H
#define MTVISUALSTYLESET_H

@class NSMutableDictionary, NSString;
@protocol MTVisualStyleSetProviding;

#import <Foundation/Foundation.h>


@interface MTVisualStyleSet : NSObject <MTVisualStyleSetProviding>

 {
    NSMutableDictionary *_visualStylesToStyleNames;
    NSMutableDictionary *_styleNamesToVisualStylings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *visualStyleSetName; // ivar: _visualStyleSetName
@property (readonly, nonatomic) NSInteger visualStyleSetVersion; // ivar: _visualStyleSetVersion


+(id)recipeNameForRecipeFromStyle:(id)arg0 fromStyleSetWithName:(id)arg1 ;
-(id)_materialDescriptionForStyle:(id)arg0 withProvidedStyles:(id)arg1 ;
-(id)_newMaterialSettingsForStyle:(id)arg0 withProvidedStyles:(id)arg1 ;
-(id)initWithName:(id)arg0 visualStyleSetDescription:(id)arg1 andDescendantDescriptions:(id)arg2 ;
-(id)visualStylingForStyle:(id)arg0 ;


@end


#endif