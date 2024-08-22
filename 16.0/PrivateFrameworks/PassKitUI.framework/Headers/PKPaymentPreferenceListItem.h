// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPREFERENCELISTITEM_H
#define PKPAYMENTPREFERENCELISTITEM_H

@class PKPaymentPreference;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentPreferenceListItem : NSObject <NSCopying>



@property (readonly, nonatomic) PKPaymentPreference *sectionPreference; // ivar: _sectionPreference


-(BOOL)isAddItem;
-(BOOL)isOptionItem;
-(BOOL)supportsInlineEditing;
-(BOOL)supportsSwipeActionType:(int)arg0 ;
-(id)_image;
-(id)_internalConfiguration;
-(id)_secondaryText;
-(id)_text;
-(id)configuration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultAccessories;
-(id)initWithSectionPreference:(id)arg0 ;


@end


#endif