// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARPROUTINGSESSIONARCHIVE_H
#define ARPROUTINGSESSIONARCHIVE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARPRoutingSessionArchive : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat routingSessionTimeout; // ivar: _routingSessionTimeout
@property (readonly, nonatomic) NSArray *sessions; // ivar: _sessions


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessions:(id)arg0 routingSessionTimeout:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif