// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUICARDMETADATA_H
#define AMSUICARDMETADATA_H


#import <Foundation/Foundation.h>


@interface AMSUICardMetadata : NSObject



+(id)_cardArtworkForPaymentPass:(id)arg0 width:(CGFloat)arg1 ;
+(id)_passesForPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 ;
+(id)appleCardIcon;
+(id)appleCardIconString;
+(id)metadataForPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 cardArtworkSize:(id)arg2 ;


@end


#endif