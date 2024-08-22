// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXINFORMATIONHEURISTICREFRESHNOTITIFCATIONTRIGGER_H
#define ATXINFORMATIONHEURISTICREFRESHNOTITIFCATIONTRIGGER_H

@class NSString;
@protocol NSSecureCoding;


#import "ATXInformationHeuristicRefreshTrigger.h"

@interface ATXInformationHeuristicRefreshNotitifcationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding>

 {
    BOOL _isDistributed;
    NSString *_notificationName;
    id *_observerToken;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotification:(id)arg0 distributed:(BOOL)arg1 ;
-(void)_start;
-(void)_stop;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif