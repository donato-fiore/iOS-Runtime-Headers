// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSCOREHAPTICSINFO_H
#define SSCOREHAPTICSINFO_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SSCoreHapticsInfo : NSObject {
    NSMutableDictionary *_SSIDToPlayerMap;
    queue _SSIDMapQueue;
}




+(id)instance;
-(NSUInteger)generateNewSSIDForPlayer:(id)arg0 ;
-(id)getPlayerForSSID:(NSUInteger)arg0 ;
-(id)init;
-(void)disposeSSID:(NSUInteger)arg0 ;
-(void)registerSSID:(NSUInteger)arg0 withPlayer:(id)arg1 ;
-(void)unregisterSSID:(NSUInteger)arg0 ;


@end


#endif