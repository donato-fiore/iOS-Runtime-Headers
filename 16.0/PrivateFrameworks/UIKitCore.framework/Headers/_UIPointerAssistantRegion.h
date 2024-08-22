// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPOINTERASSISTANTREGION_H
#define _UIPOINTERASSISTANTREGION_H



#import "UIPointerRegion.h"
#import "UIView.h"
#import "_UIAssistantEntry.h"

@interface _UIPointerAssistantRegion : UIPointerRegion {
    BOOL _selected;
    UIView *_targetView;
    _UIAssistantEntry *_assistant;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif