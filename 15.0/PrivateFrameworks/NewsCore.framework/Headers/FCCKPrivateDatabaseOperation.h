// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKPRIVATEDATABASEOPERATION_H
#define FCCKPRIVATEDATABASEOPERATION_H



#import "FCOperation.h"
#import "FCCKPrivateDatabase.h"

@interface FCCKPrivateDatabaseOperation : FCOperation

@property (retain, nonatomic) FCCKPrivateDatabase *database; // ivar: _database
@property (nonatomic) BOOL handleIdentityLoss; // ivar: _handleIdentityLoss
@property (nonatomic) BOOL skipPreflight; // ivar: _skipPreflight


-(BOOL)canRetryWithError:(id)arg0 retryAfter:(*id)arg1 ;
-(BOOL)validateOperation;
-(NSUInteger)maxRetries;
-(id)init;
-(void)runChildCKOperation:(id)arg0 destination:(NSInteger)arg1 ;


@end


#endif