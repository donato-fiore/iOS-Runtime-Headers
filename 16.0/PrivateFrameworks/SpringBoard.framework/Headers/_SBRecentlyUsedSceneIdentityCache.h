// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBRECENTLYUSEDSCENEIDENTITYCACHE_H
#define _SBRECENTLYUSEDSCENEIDENTITYCACHE_H

@class NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol BSDescriptionStreamable, NSCopying;

#import <Foundation/Foundation.h>


@interface _SBRecentlyUsedSceneIdentityCache : NSObject <BSDescriptionStreamable, NSCopying>

 {
    NSMutableDictionary *_recentSceneIdentityTokensByPID;
    NSMutableOrderedSet *_recentPIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)promoteContainedSceneIdentityToken:(id)arg0 forPID:(int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)addSceneIdentityToken:(id)arg0 forPID:(int)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)removeSceneIdentityToken:(id)arg0 forPID:(int)arg1 ;


@end


#endif