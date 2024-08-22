// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALROUTE_H
#define CALROUTE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CalLocation.h"

@interface CalRoute : NSObject <NSSecureCoding>



@property CGFloat duration; // ivar: _duration
@property (retain) CalLocation *end; // ivar: _end
@property (copy) NSString *route; // ivar: _route
@property (retain) CalLocation *start; // ivar: _start


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif