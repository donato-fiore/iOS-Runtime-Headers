// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQINTERNETPRIVACYBANNERMODEL_H
#define ICQINTERNETPRIVACYBANNERMODEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ICQInternetPrivacyBannerModel : NSObject

@property (readonly, copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, copy, nonatomic) NSString *networkName; // ivar: _networkName
@property (readonly, nonatomic) NSUInteger status; // ivar: _status
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 status:(NSUInteger)arg3 networkName:(id)arg4 ;


@end


#endif