// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REPHASEAUDIOSCENE_H
#define REPHASEAUDIOSCENE_H

@class PHASEListener;

#import <Foundation/Foundation.h>

#import "REPHASEContext.h"

@interface REPHASEAudioScene : NSObject {
    unique_ptr<re::HashTable<unsigned long long, REPHASEEntity *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false>, std::function<void (re::HashTable<unsigned long long, REPHASEEntity *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> _entities;
    unique_ptr<re::HashTable<unsigned long long, PHASEListener *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false>, std::function<void (re::HashTable<unsigned long long, PHASEListener *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> _listeners;
    unique_ptr<re::HashTable<unsigned long long, PHASEObject *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false>, std::function<void (re::HashTable<unsigned long long, PHASEObject *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> _sessionRootObjects;
    HashTable<unsigned long long, PHASESource *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> _sources;
    vector<PendingListener, std::allocator<PendingListener>> pendingListeners;
    REPHASEContext *_context;
    PHASEListener *_systemListener;
}


@property (readonly) BOOL isValid;


-(*void)getAllEntities;
-(*void)listeners;
-(*void)sessionRootObjects;
-(*void)sources;
-(id)getEntity:(NSUInteger)arg0 ;
-(id)getOrCreateEntity:(NSUInteger)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)createAudioSessionRootWithID:(NSUInteger)arg0 sessionUUID:(id)arg1 ;
-(void)createListenerWithID:(NSUInteger)arg0 listenerType:(unsigned char)arg1 ;
-(void)createPendingListenersIfReady;
-(void)destroy;
-(void)removeEntity:(NSUInteger)arg0 ;


@end


#endif