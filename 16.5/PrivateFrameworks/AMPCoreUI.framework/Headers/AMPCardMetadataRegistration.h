// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMPCARDMETADATAREGISTRATION_H
#define AMPCARDMETADATAREGISTRATION_H


#import <Foundation/Foundation.h>


@interface AMPCardMetadataRegistration : NSObject



+(id)_cardArtworkForPaymentPass:(id)arg0 width:(CGFloat)arg1 ;
+(id)_passesForPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 ;
+(id)metadataForPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 size:(id)arg2 ;


@end


#endif