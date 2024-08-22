// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIBUYBUTTONDESCRIPTOR_H
#define SKUIBUYBUTTONDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SKUIStoreIdentifier.h"

@interface SKUIBuyButtonDescriptor : NSObject

@property (copy, nonatomic) NSString *buttonText; // ivar: _buttonText
@property (nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (copy, nonatomic) NSString *confirmationText; // ivar: _confirmationText
@property (nonatomic) NSUInteger elementType; // ivar: _elementType
@property (nonatomic) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) NSInteger itemIdentifier; // ivar: _itemIdentifier
@property (nonatomic) NSInteger progressType; // ivar: _progressType
@property (nonatomic) BOOL shouldSuppressCloudRestore; // ivar: _shouldSuppressCloudRestore
@property (nonatomic) BOOL shouldSuppressEnabled; // ivar: _shouldSuppressEnabled
@property (nonatomic) BOOL showingConfirmation; // ivar: _showingConfirmation
@property (nonatomic) BOOL showsUniversal; // ivar: _showsUniversal
@property (retain, nonatomic) SKUIStoreIdentifier *storeIdentifier; // ivar: _storeIdentifier
@property (retain, nonatomic) NSString *variantIdentifier; // ivar: _variantIdentifier


-(BOOL)canPerformLocalActionWithItemState:(id)arg0 ;
-(BOOL)canPersonalizeUsingItemState:(id)arg0 ;


@end


#endif