// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADISPLAYPERSISTEDLATENCY_H
#define CADISPLAYPERSISTEDLATENCY_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CADisplayPersistedLatency : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat latency; // ivar: _latency
@property (copy, nonatomic) NSDictionary *mode; // ivar: _mode
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif