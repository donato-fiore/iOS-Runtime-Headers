// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KGGRAPHUNIVERSE_H
#define KGGRAPHUNIVERSE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface KGGraphUniverse : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMutableDictionary *databaseByURL; // ivar: _databaseByURL


+(BOOL)swapDatabaseFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(id)instance;
+(id)managerForGraphStoreAtURL:(id)arg0 ;
+(void)closeDatabaseAtURL:(id)arg0 completion:(id)arg1 ;
+(void)initialize;
-(BOOL)swapDatabaseFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)managerForGraphStoreAtURL:(id)arg0 ;
-(void)closeDatabaseAtURL:(id)arg0 completion:(id)arg1 ;
-(void)removeDatabaseByURL:(id)arg0 ;


@end


#endif