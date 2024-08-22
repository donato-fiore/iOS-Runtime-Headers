// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFDIGITALCARKEYENDEVENT_H
#define NFDIGITALCARKEYENDEVENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NFApplet.h"

@interface NFDigitalCarKeyEndEvent : NSObject <NSSecureCoding>

 {
    NSString *_appletIdentifier;
}


@property (readonly, nonatomic) NFApplet *applet; // ivar: _applet
@property (readonly, nonatomic) BOOL didError; // ivar: _didError
@property (readonly, nonatomic) NSString *keyIdentifier; // ivar: _keyIdentifier
@property (readonly, nonatomic) unsigned int result; // ivar: _result


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)description;
-(id)initFromContactlessPaymentEndEvent:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif