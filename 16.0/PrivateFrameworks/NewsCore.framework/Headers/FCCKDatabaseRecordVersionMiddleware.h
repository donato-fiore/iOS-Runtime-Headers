// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKDATABASERECORDVERSIONMIDDLEWARE_H
#define FCCKDATABASERECORDVERSIONMIDDLEWARE_H

@class NSString;
@protocol FCCKDatabaseRecordMiddleware, FCCKDatabaseOperationMiddleware;

#import <Foundation/Foundation.h>


@interface FCCKDatabaseRecordVersionMiddleware : NSObject <FCCKDatabaseRecordMiddleware, FCCKDatabaseOperationMiddleware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)database:(id)arg0 willEnqueueOperation:(id)arg1 error:(*id)arg2 ;
-(id)clientToServerRecord:(id)arg0 inDatabase:(id)arg1 error:(*id)arg2 ;
-(id)clientToServerRecordID:(id)arg0 inDatabase:(id)arg1 error:(*id)arg2 ;
-(id)clientToServerRecordType:(id)arg0 withRecordID:(id)arg1 inDatabase:(id)arg2 error:(*id)arg3 ;
-(id)clientToServerRecordZone:(id)arg0 inDatabase:(id)arg1 error:(*id)arg2 ;
-(id)clientToServerRecordZoneID:(id)arg0 inDatabase:(id)arg1 error:(*id)arg2 ;
-(id)serverToClientRecord:(id)arg0 inDatabase:(id)arg1 error:(*id)arg2 ;
-(id)serverToClientRecordID:(id)arg0 inDatabase:(id)arg1 error:(*id)arg2 ;
-(id)serverToClientRecordType:(id)arg0 withRecordID:(id)arg1 inDatabase:(id)arg2 error:(*id)arg3 ;
-(id)serverToClientRecordZone:(id)arg0 inDatabase:(id)arg1 error:(*id)arg2 ;
-(id)serverToClientRecordZoneID:(id)arg0 inDatabase:(id)arg1 error:(*id)arg2 ;


@end


#endif