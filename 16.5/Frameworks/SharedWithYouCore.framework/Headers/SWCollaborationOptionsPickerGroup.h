// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWCOLLABORATIONOPTIONSPICKERGROUP_H
#define SWCOLLABORATIONOPTIONSPICKERGROUP_H

@class NSString;


#import "SWCollaborationOptionsGroup.h"

@interface SWCollaborationOptionsPickerGroup : SWCollaborationOptionsGroup {
    BOOL _isUpdatingSelectionState;
}


@property (retain, nonatomic) NSString *selectedOptionIdentifier; // ivar: _selectedOptionIdentifier


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)_defaultSelectedOptionIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 options:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setOptions:(id)arg0 ;


@end


#endif