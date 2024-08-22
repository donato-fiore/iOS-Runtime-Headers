// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSALOGEVENT_H
#define OSALOGEVENT_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "OSALogIdentity.h"

@interface OSALogEvent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *details; // ivar: _details
@property (readonly, nonatomic) OSALogIdentity *identity; // ivar: _identity


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 details:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif