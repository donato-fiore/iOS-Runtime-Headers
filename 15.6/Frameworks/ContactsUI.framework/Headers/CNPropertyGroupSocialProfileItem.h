// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPROPERTYGROUPSOCIALPROFILEITEM_H
#define CNPROPERTYGROUPSOCIALPROFILEITEM_H

@class CNSocialProfile;


#import "CNPropertyGroupItem.h"

@interface CNPropertyGroupSocialProfileItem : CNPropertyGroupItem

@property (readonly, nonatomic) CNSocialProfile *profile;


+(id)emptyValueForLabel:(id)arg0 ;
-(BOOL)isEquivalentToItem:(id)arg0 ;
-(id)defaultActionURL;
-(id)displayLabel;
-(id)displayStringForValue:(id)arg0 ;
-(id)editingStringValue;
-(id)valueForDisplayString:(id)arg0 ;


@end


#endif