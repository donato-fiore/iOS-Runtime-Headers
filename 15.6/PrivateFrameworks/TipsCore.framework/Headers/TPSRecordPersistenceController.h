// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSRECORDPERSISTENCECONTROLLER_H
#define TPSRECORDPERSISTENCECONTROLLER_H


#import <Foundation/Foundation.h>


@interface TPSRecordPersistenceController : NSObject



+(id)dataQueue;
+(id)persistedObjectForKey:(id)arg0 ;
+(void)deleteAllRecordsForPlugin:(id)arg0 completion:(id)arg1 ;
+(void)deleteRecord:(id)arg0 completion:(id)arg1 ;
+(void)persistObject:(id)arg0 forKey:(id)arg1 ;
+(void)persistRecord:(id)arg0 ;
+(void)removeObjectForKey:(id)arg0 ;


@end


#endif