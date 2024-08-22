// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSENGAGEMENTCACHEDATABASE_H
#define AMSENGAGEMENTCACHEDATABASE_H

@class NSString;
@protocol AMSSQLiteConnectionDelegate;

#import <Foundation/Foundation.h>

#import "AMSSQLiteConnection.h"

@interface AMSEngagementCacheDatabase : NSObject <AMSSQLiteConnectionDelegate>



@property (retain, nonatomic) AMSSQLiteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)collectGarbageWithError:(*id)arg0 ;
-(BOOL)connectionNeedsResetForCorruption:(id)arg0 ;
-(BOOL)insertResponseData:(id)arg0 filterData:(id)arg1 expiration:(id)arg2 error:(*id)arg3 ;
-(BOOL)openAtPath:(id)arg0 error:(*id)arg1 ;
// -(BOOL)selectWithExpirationDate:(id)arg0 handler:(id)arg1 error:(unk)arg2  ;
-(void)_performTransaction:(id)arg0 ;


@end


#endif