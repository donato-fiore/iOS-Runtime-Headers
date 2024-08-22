// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11ACTIVITYKIT21OPAQUEACTIVITYPAYLOAD_H
#define _TTC11ACTIVITYKIT21OPAQUEACTIVITYPAYLOAD_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC11ActivityKit21OpaqueActivityPayload : NSObject <NSSecureCoding>

 {
    ? timestamp;
    ? contentState;
    ? alertConfiguration;
}




+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif