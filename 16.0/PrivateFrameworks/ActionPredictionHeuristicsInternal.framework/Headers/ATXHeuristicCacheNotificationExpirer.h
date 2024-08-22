// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHEURISTICCACHENOTIFICATIONEXPIRER_H
#define ATXHEURISTICCACHENOTIFICATIONEXPIRER_H

@class NSString;
@protocol NSSecureCoding;


#import "ATXHeuristicCacheExpirer.h"

@interface ATXHeuristicCacheNotificationExpirer : ATXHeuristicCacheExpirer <NSSecureCoding>

 {
    NSString *_notificationName;
    id *_token;
    BOOL _isLocal;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initDistributed:(id)arg0 ;
-(id)initLocal:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_start;
-(void)_stop;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif