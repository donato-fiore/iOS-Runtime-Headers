// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYSESSION_H
#define WBSHISTORYSESSION_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface WBSHistorySession : NSObject

@property (readonly, nonatomic) BOOL isCurrentSession;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(id)currentSession;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithSessionStartDate:(id)arg0 ;


@end


#endif