// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HISTORYTABLEVIEWDATASOURCESESSION_H
#define HISTORYTABLEVIEWDATASOURCESESSION_H

@class NSString, NSOrderedSet, NSDate;

#import <Foundation/Foundation.h>


@interface HistoryTableViewDataSourceSession : NSObject {
    NSString *_sessionIdentifier;
}


@property (copy, nonatomic) NSOrderedSet *historyItems; // ivar: _historyItems
@property (readonly, nonatomic) NSDate *sessionDate; // ivar: _sessionDate
@property (readonly, nonatomic) NSString *sessionIdentifier;


+(id)_sessionDateFromDate:(id)arg0 ;
+(id)_sessionIdentifierFromDate:(id)arg0 ;
+(id)sessionIdentifierFromDate:(id)arg0 ;
+(id)sessionWithDate:(id)arg0 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDate:(id)arg0 ;


@end


#endif