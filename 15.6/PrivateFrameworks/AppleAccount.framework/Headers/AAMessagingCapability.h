// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAMESSAGINGCAPABILITY_H
#define AAMESSAGINGCAPABILITY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AAMessagingCapability : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger capability; // ivar: _capability
@property (readonly, nonatomic) NSString *capabilityString;


+(BOOL)supportsSecureCoding;
-(id)initWithCapabilityType:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif