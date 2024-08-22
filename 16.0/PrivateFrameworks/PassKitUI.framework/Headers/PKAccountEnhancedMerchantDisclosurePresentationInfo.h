// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTENHANCEDMERCHANTDISCLOSUREPRESENTATIONINFO_H
#define PKACCOUNTENHANCEDMERCHANTDISCLOSUREPRESENTATIONINFO_H

@class NSString, PKAccountEnhancedMerchant;
@protocol PKIdentifiable, NSCopying;

#import <Foundation/Foundation.h>


@interface PKAccountEnhancedMerchantDisclosurePresentationInfo : NSObject <PKIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *disclosures; // ivar: _disclosures
@property (retain, nonatomic) PKAccountEnhancedMerchant *enhancedMerchant; // ivar: _enhancedMerchant
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountEnhancedMerchantDisclosure:(id)arg0 ;
-(id)initWithAccountEnhancedMerchant:(id)arg0 ;


@end


#endif