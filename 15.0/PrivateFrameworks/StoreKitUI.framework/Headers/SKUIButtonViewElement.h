// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIBUTTONVIEWELEMENT_H
#define SKUIBUTTONVIEWELEMENT_H

@class NSString, IKDOMElement, IKViewElementStyle;


#import "SKUIViewElement.h"
#import "SKUIViewElementText.h"
#import "SKUIImageViewElement.h"
#import "SKUIBuyButtonDescriptor.h"
#import "SKUIStoreIdentifier.h"

@interface SKUIButtonViewElement : SKUIViewElement {
    SKUIViewElementText *_buttonText;
    char _enabled;
    NSString *_toggleItemIdentfier;
    IKDOMElement *_xml;
}


@property (readonly, nonatomic) SKUIImageViewElement *additionalButtonImage;
@property (readonly, nonatomic) BOOL autoIncrementCount; // ivar: _autoIncrementCount
@property (readonly, nonatomic) NSString *badgeResourceName; // ivar: _badgeResourceName
@property (readonly, nonatomic, getter=isBigHitButton) BOOL bigHitButton; // ivar: _bigHitButton
@property (readonly, nonatomic) CGFloat bigHitSize; // ivar: _bigHitSize
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) SKUIImageViewElement *buttonImage;
@property (readonly, nonatomic) SKUIViewElementText *buttonText;
@property (readonly, nonatomic) IKViewElementStyle *buttonTitleStyle;
@property (readonly, nonatomic) NSInteger buttonViewSubType; // ivar: _buttonViewSubType
@property (readonly, nonatomic) NSInteger buttonViewType; // ivar: _buttonViewType
@property (retain, nonatomic) SKUIBuyButtonDescriptor *buyButtonDescriptor; // ivar: _buyButtonDescriptor
@property (readonly, nonatomic) NSString *confirmationText; // ivar: _confirmationText
@property (readonly, nonatomic) NSInteger dataPlaybackId; // ivar: _dataPlaybackId
@property (readonly, nonatomic, getter=isDisabledButSelectable) BOOL disabledButSelectable; // ivar: _disabledButSelectable
@property (readonly, nonatomic) NSInteger itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSString *nonToggledText; // ivar: _nonToggledText
@property (readonly, nonatomic) NSString *playItemIdentifier; // ivar: _playItemIdentifier
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) BOOL showOnDemand; // ivar: _showOnDemand
@property (readonly, nonatomic) NSString *sizeVariant; // ivar: _sizeVariant
@property (readonly, nonatomic) SKUIStoreIdentifier *storeIdentifier; // ivar: _storeIdentifier
@property (readonly, nonatomic) BOOL suppressCloudRestore; // ivar: _suppressCloudRestore
@property (readonly, nonatomic) NSString *toggleItemIdentifier; // ivar: _toggleItemIdentifier
@property (nonatomic, getter=isToggled) BOOL toggled; // ivar: _toggled
@property (readonly, nonatomic) NSString *toggledText; // ivar: _toggledText
@property (readonly, nonatomic) NSString *variantIdentifier; // ivar: _variantIdentifier


-(BOOL)isEnabled;
-(NSInteger)pageComponentType;
-(NSUInteger)elementType;
-(id)_parseButtonText;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)description;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(id)personalizationLibraryItems;
-(void)dealloc;


@end


#endif