// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIITEMOFFER_H
#define SKUIITEMOFFER_H

@class NSString, NSMutableDictionary, NSDictionary;
@protocol SKUICacheCoding;

#import <Foundation/Foundation.h>


@interface SKUIItemOffer : NSObject <SKUICacheCoding>

 {
    NSString *_fileSizeText;
    NSString *_offerTypeString;
}


@property (readonly, nonatomic) NSString *actionParameters; // ivar: _actionParameters
@property (readonly, nonatomic) NSString *buttonText; // ivar: _buttonText
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly, nonatomic) NSString *confirmationText; // ivar: _confirmationText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger fileSize; // ivar: _fileSize
@property (readonly, nonatomic) NSString *fileSizeText;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *lookupDictionary;
@property (readonly, nonatomic) NSInteger offerType;
@property (readonly, nonatomic) float price; // ivar: _price
@property (readonly, nonatomic) BOOL shouldEnableMessagesExtension; // ivar: _shouldEnableMessagesExtension
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *variantIdentifier; // ivar: _variantIdentifier


-(id)initWithButtonText:(id)arg0 ;
-(id)initWithCacheRepresentation:(id)arg0 ;
-(id)initWithLookupDictionary:(id)arg0 ;
-(id)initWithOfferDictionary:(id)arg0 ;
-(id)initWithRedownloadToken:(id)arg0 ;
-(void)_addActionParameterWithName:(id)arg0 value:(id)arg1 ;


@end


#endif