// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPREFERENCEOPTIONLISTITEM_H
#define PKPAYMENTPREFERENCEOPTIONLISTITEM_H



#import "PKPaymentPreferenceListItem.h"

@interface PKPaymentPreferenceOptionListItem : PKPaymentPreferenceListItem {
    id *_hasErrorHandler;
}


@property (readonly, nonatomic) id *preference; // ivar: _preference


-(BOOL)_supportsDeleteAction;
-(BOOL)_supportsEditAction;
-(BOOL)_supportsEditing;
-(BOOL)supportsSwipeActionType:(int)arg0 ;
-(id)_image;
-(id)_inlineEditingConfiguration;
-(id)_internalConfiguration;
-(id)_placeholderText;
-(id)_secondaryText;
-(id)_text;
-(id)configuration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPreference:(id)arg0 inSectionPreference:(id)arg1 hasErrorHandler:(id)arg2 ;


@end


#endif