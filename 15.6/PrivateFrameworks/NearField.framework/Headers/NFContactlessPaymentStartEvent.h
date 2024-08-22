// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFCONTACTLESSPAYMENTSTARTEVENT_H
#define NFCONTACTLESSPAYMENTSTARTEVENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NFApplet.h"

@interface NFContactlessPaymentStartEvent : NSObject <NSSecureCoding>

 {
    NSString *_appletIdentifier;
    NSString *_keyIdentifier;
}


@property (readonly, retain, nonatomic) NFApplet *applet; // ivar: _applet
@property (readonly, nonatomic) BOOL background; // ivar: _background
@property (readonly, retain, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) unsigned short paymentMode; // ivar: _paymentMode
@property (readonly, nonatomic) unsigned short selectStatus; // ivar: _selectStatus
@property (readonly, retain, nonatomic) NSString *spIdentifier; // ivar: _spIdentifier


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif