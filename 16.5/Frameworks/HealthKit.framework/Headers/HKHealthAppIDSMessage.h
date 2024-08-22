// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEALTHAPPIDSMESSAGE_H
#define HKHEALTHAPPIDSMESSAGE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKHealthAppIDSMessage : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSObject<NSSecureCoding> *payload; // ivar: _payload
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif