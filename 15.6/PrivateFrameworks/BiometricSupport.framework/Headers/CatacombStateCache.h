// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATACOMBSTATECACHE_H
#define CATACOMBSTATECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CatacombStateCache : NSObject {
    NSMutableDictionary *_cachedStates;
}




-(id)cachedComponents;
-(id)cachedUserComponents;
-(id)init;
-(int)addUserStatesFromBuffer:(id)arg0 ;
-(unsigned int)stateOfComponent:(id)arg0 ;
-(unsigned int)stateOfMasterComponent;
-(unsigned int)stateOfUserComponent:(unsigned int)arg0 ;
-(void)removeUser:(unsigned int)arg0 ;
-(void)reset;


@end


#endif