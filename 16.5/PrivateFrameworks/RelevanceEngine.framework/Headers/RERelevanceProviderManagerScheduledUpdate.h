// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RERELEVANCEPROVIDERMANAGERSCHEDULEDUPDATE_H
#define RERELEVANCEPROVIDERMANAGERSCHEDULEDUPDATE_H

@class NSDate;


#import "RERelevanceProviderManagerUpdate.h"

@interface RERelevanceProviderManagerScheduledUpdate : RERelevanceProviderManagerUpdate

@property (readonly, nonatomic) NSDate *updateDate; // ivar: _updateDate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProvider:(id)arg0 updateDate:(id)arg1 ;


@end


#endif