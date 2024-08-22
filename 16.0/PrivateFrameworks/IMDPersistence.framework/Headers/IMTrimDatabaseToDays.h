// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMTRIMDATABASETODAYS_H
#define IMTRIMDATABASETODAYS_H



#import "IMAbstractDatabaseTrimmer.h"

@interface IMTrimDatabaseToDays : IMAbstractDatabaseTrimmer

@property (readonly, nonatomic) NSInteger newerThanDays; // ivar: _newerThanDays


-(id)initWithSourceDatabasePath:(id)arg0 destinationDatabasePath:(id)arg1 newerThanDays:(NSInteger)arg2 ;
-(void)performMessageSelectionWithOperation:(struct IMDSqlOperation *)arg0 ;


@end


#endif