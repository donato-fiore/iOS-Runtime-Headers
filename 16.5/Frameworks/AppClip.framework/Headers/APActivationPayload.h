// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APACTIVATIONPAYLOAD_H
#define APACTIVATIONPAYLOAD_H

@class NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface APActivationPayload : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)confirmAcquiredInRegion:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif