// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFINSHORTCUTRUNDESCRIPTOR_H
#define WFINSHORTCUTRUNDESCRIPTOR_H

@class INShortcut;


#import "WFWorkflowRunDescriptor.h"

@interface WFINShortcutRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) INShortcut *shortcut; // ivar: _shortcut


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShortcut:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif