// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDYNAMICPROVISIONINGPAGELEARNMORECONTENT_H
#define PKDYNAMICPROVISIONINGPAGELEARNMORECONTENT_H

@class NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKDynamicProvisioningPageLearnMoreContent : NSObject <NSCopying>



@property (copy, nonatomic) NSString *body; // ivar: _body
@property (copy, nonatomic) NSString *businessChatButtonTitle; // ivar: _businessChatButtonTitle
@property (copy, nonatomic) NSString *businessChatIntentName; // ivar: _businessChatIntentName
@property (copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (copy, nonatomic) NSURL *buttonURL; // ivar: _buttonURL
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictonary:(id)arg0 ;


@end


#endif