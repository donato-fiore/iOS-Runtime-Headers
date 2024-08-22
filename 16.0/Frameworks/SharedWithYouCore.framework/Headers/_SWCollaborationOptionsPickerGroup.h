// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SWCOLLABORATIONOPTIONSPICKERGROUP_H
#define _SWCOLLABORATIONOPTIONSPICKERGROUP_H

@class NSString;


#import "SWCollaborationOptionsGroup.h"

@interface _SWCollaborationOptionsPickerGroup : SWCollaborationOptionsGroup {
    BOOL _isUpdatingSelectionState;
}


@property (retain, nonatomic) NSString *selectedOptionIdentifier; // ivar: _selectedOptionIdentifier


+(BOOL)supportsSecureCoding;
-(id)_defaultSelectedOptionIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 identifier:(id)arg1 footer:(id)arg2 options:(id)arg3 ;
-(id)initWithTitle:(id)arg0 identifier:(id)arg1 footer:(id)arg2 options:(id)arg3 selectedOptionIdentifierIndex:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setOptions:(id)arg0 ;


@end


#endif