// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8MAPSSYNC13MAPSSYNCSTORE_H
#define _TTC8MAPSSYNC13MAPSSYNCSTORE_H


#import <Foundation/Foundation.h>


@interface _TtC8MapsSync13MapsSyncStore : NSObject {
    ? _primaryContainer;
    ? _cacheContainer;
    ? _queue;
    ? _isLoaded;
    ? _isLoading;
    ? _loadError;
    ? _loadHandlers;
    ? _loadLock;
}


@property (nonatomic, readonly) BOOL isLoaded;


+(id)withAPIv1StoreAndReturnError:(*id)arg0 ;
+(id)withStoreFor:(id)arg0 error:(*id)arg1 ;
+(void)withAPIv1StoreWithBlock:(id)arg0 ;
+(void)withDefaultStoreWithBlock:(id)arg0 ;
+(void)withStoreFor:(id)arg0 block:(id)arg1 ;
-(BOOL)deleteWithObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveWithObjects:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)callLoadHandlers;
-(void)load;
-(void)notifyOnLoadWithHandler:(id)arg0 ;
-(void)withManagedObjects:(id)arg0 block:(id)arg1 ;


@end


#endif