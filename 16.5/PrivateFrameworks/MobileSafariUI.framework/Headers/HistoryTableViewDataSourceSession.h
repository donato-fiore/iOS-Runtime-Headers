// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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


+(id)sessionWithDate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDate:(id)arg0 ;


@end


#endif