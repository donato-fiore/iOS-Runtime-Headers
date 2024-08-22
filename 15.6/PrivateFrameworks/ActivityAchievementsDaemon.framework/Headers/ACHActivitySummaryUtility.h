// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHACTIVITYSUMMARYUTILITY_H
#define ACHACTIVITYSUMMARYUTILITY_H

@class HDDatabaseTransactionContext, HDProfile, HDActivitySummaryBuilder;

#import <Foundation/Foundation.h>


@interface ACHActivitySummaryUtility : NSObject

@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext;
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (retain, nonatomic) HDActivitySummaryBuilder *summaryBuilder; // ivar: _summaryBuilder


// -(BOOL)_enumerateActivitySummariesForDateComponentInterval:(id)arg0 handler:(id)arg1 error:(unk)arg2  ;
-(id)initWithProfile:(id)arg0 shouldIncludePrivateProperties:(BOOL)arg1 ;
-(id)newEmptyActivitySummaryFromSummary:(id)arg0 ;
-(void)enumerateActivitySummariesForDateComponentInterval:(id)arg0 handler:(id)arg1 ;


@end


#endif