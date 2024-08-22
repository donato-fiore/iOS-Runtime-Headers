// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPFIELDPICKERITEM_H
#define PKPAYMENTSETUPFIELDPICKERITEM_H

@class DIAttributePickerItem, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupFieldPickerItem : NSObject <NSCopying>



@property (retain, nonatomic) DIAttributePickerItem *attributePickerItem; // ivar: _attributePickerItem
@property (readonly, copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (readonly, copy, nonatomic) NSString *submissionValue; // ivar: _submissionValue


+(id)_itemWithDIAttributePickerItem:(id)arg0 ;
+(id)_itemWithDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 value:(id)arg1 ;


@end


#endif