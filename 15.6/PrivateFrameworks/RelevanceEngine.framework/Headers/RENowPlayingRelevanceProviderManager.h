// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RENOWPLAYINGRELEVANCEPROVIDERMANAGER_H
#define RENOWPLAYINGRELEVANCEPROVIDERMANAGER_H

@protocol RENowPlayingRelevanceProviderManagerProperties;


#import "RERelevanceProviderManager.h"

@interface RENowPlayingRelevanceProviderManager : RERelevanceProviderManager <RENowPlayingRelevanceProviderManagerProperties>

 {
    NSUInteger _state;
}


@property (readonly, nonatomic) NSUInteger state;


+(Class)_relevanceProviderClass;
+(id)_features;
-(id)_valueForProvider:(id)arg0 feature:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_updatePlaybackState;
-(void)pause;
-(void)resume;


@end


#endif