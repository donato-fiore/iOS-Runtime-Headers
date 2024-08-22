// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTSOURCEMAPSSUPPORTHISTORYENTRY_H
#define RTSOURCEMAPSSUPPORTHISTORYENTRY_H

@class NSDate;


#import "RTSourceMapsSupport.h"

@interface RTSourceMapsSupportHistoryEntry : RTSourceMapsSupport

@property (readonly, nonatomic) NSDate *usageDate; // ivar: _usageDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsageDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif