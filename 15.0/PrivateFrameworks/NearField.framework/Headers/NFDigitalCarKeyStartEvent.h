// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFDIGITALCARKEYSTARTEVENT_H
#define NFDIGITALCARKEYSTARTEVENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NFApplet.h"

@interface NFDigitalCarKeyStartEvent : NSObject <NSSecureCoding>

 {
    NSString *_appletIdentifier;
}


@property (readonly, nonatomic) NFApplet *applet; // ivar: _applet
@property (readonly, nonatomic) NSString *keyIdentifier; // ivar: _keyIdentifier
@property (readonly, nonatomic) NSString *spIdentifier; // ivar: _spIdentifier


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)description;
-(id)initFromContactlessPaymentStartEvent:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif