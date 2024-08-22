// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYGLOBALOBJECTIDCACHE_H
#define PFUBIQUITYGLOBALOBJECTIDCACHE_H

@class NSString, NSMutableDictionary, NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface PFUbiquityGlobalObjectIDCache : NSObject {
    NSString *_storeName;
    NSString *_localPeerID;
    NSMutableDictionary *_peerIDToEntityNameToPrimaryKey;
    NSRecursiveLock *_peerIDToEntityNameToPrimaryKeyLock;
}




+(id)stringValueFromArray:(id)arg0 atIndexDescribedByStringNumber:(id)arg1 ;
-(id)init;
-(id)initWithLocalPeerID:(id)arg0 forStoreName:(id)arg1 ;
-(void)dealloc;


@end


#endif