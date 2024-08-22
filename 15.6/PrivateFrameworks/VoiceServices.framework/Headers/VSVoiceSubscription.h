// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSVOICESUBSCRIPTION_H
#define VSVOICESUBSCRIPTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VSVoiceAsset.h"

@interface VSVoiceSubscription : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accessoryID; // ivar: _accessoryID
@property (retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (retain, nonatomic) VSVoiceAsset *voice; // ivar: _voice


+(BOOL)supportsSecureCoding;
-(id)initWithClient:(id)arg0 accessory:(id)arg1 voice:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif