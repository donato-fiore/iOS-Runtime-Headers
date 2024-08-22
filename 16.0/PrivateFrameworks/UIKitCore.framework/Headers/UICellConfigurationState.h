// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICELLCONFIGURATIONSTATE_H
#define UICELLCONFIGURATIONSTATE_H

@class NSString;
@protocol _UICellConfigurationStateReadonly;


#import "UIViewConfigurationState.h"

@interface UICellConfigurationState : UIViewConfigurationState <_UICellConfigurationStateReadonly>

 {
    ? _cellStateFlags;
}


@property (readonly, nonatomic) NSInteger _contextMenuGroupLocation;
@property (nonatomic, setter=_setUsesAnyPlainListStyle:) BOOL _usesAnyPlainListStyle;
@property (readonly, nonatomic) NSUInteger _viewConfigurationState;
@property (nonatomic) NSInteger cellDragState;
@property (nonatomic) NSInteger cellDropState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic, getter=isFocused) BOOL focused;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic, getter=isReordering) BOOL reordering;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSwiped) BOOL swiped;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithState:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_appendPropertiesForDescription:(id)arg0 ;
-(void)_configureWithViewConfigurationState:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif