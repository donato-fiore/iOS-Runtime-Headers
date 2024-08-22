// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXINFORMATIONHEURISTICREFRESHTIMETRIGGER_H
#define ATXINFORMATIONHEURISTICREFRESHTIMETRIGGER_H

@class NSDate;
@protocol NSSecureCoding, OS_dispatch_source;


#import "ATXInformationHeuristicRefreshTrigger.h"

@interface ATXInformationHeuristicRefreshTimeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding>

 {
    NSObject<OS_dispatch_source> *_source;
}


@property (readonly, nonatomic) NSDate *fireDate; // ivar: _fireDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFireDate:(id)arg0 ;
-(void)_start;
-(void)_stop;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif