// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTRIMDATABASETOMESSAGECOUNT_H
#define IMTRIMDATABASETOMESSAGECOUNT_H



#import "IMAbstractDatabaseTrimmer.h"

@interface IMTrimDatabaseToMessageCount : IMAbstractDatabaseTrimmer

@property (readonly, nonatomic) NSInteger messageCount; // ivar: _messageCount


-(id)initWithSourceDatabasePath:(id)arg0 destinationDatabasePath:(id)arg1 messageCount:(NSInteger)arg2 ;
-(void)performMessageSelectionWithOperation:(struct IMDSqlOperation *)arg0 ;


@end


#endif