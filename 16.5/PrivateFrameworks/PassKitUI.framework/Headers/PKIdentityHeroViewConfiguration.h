// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKIDENTITYHEROVIEWCONFIGURATION_H
#define PKIDENTITYHEROVIEWCONFIGURATION_H

@class PKPaymentHeroImage, NSString;

#import <Foundation/Foundation.h>


@interface PKIdentityHeroViewConfiguration : NSObject

@property (retain, nonatomic) PKPaymentHeroImage *image; // ivar: _image
@property (retain, nonatomic) NSString *primaryButtonTitle; // ivar: _primaryButtonTitle
@property (retain, nonatomic) NSString *secondaryButtonTitle; // ivar: _secondaryButtonTitle
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithImage:(id)arg0 title:(id)arg1 subtitle:(id)arg2 primaryButtonTitle:(id)arg3 secondaryButtonTitle:(id)arg4 ;


@end


#endif