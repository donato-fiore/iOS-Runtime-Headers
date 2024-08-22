// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFPEERMAP_H
#define AFPEERMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface AFPeerMap : NSObject {
    NSMutableDictionary *_objectsByUUID;
    NSMutableDictionary *_uuidsByAssistantIdentifier;
    NSMutableDictionary *_uuidsByRapportIdentifier;
    NSMutableDictionary *_uuidsByIdsDeviceIdentifier;
    NSMutableDictionary *_uuidsByHomeKitIdentifier;
}




-(id)_getUUIDAndUpdateIDMapsForPeerInfo:(id)arg0 ;
-(id)init;
-(id)objectForPeerInfo:(id)arg0 ;
-(void)_cleanUpUUIDMapsForPeerInfo:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)removeObjectForPeerInfo:(id)arg0 ;
-(void)setObject:(id)arg0 forPeerInfo:(id)arg1 ;


@end


#endif