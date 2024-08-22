// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INUPCOMINGMEDIAMANAGER_H
#define INUPCOMINGMEDIAMANAGER_H

@class CSSearchableIndex;

#import <Foundation/Foundation.h>


@interface INUpcomingMediaManager : NSObject

@property (readonly, nonatomic) CSSearchableIndex *index; // ivar: _index


+(id)mediaQueue;
+(id)sharedManager;
-(NSInteger)_predictionModeForBundleId:(id)arg0 type:(NSInteger)arg1 error:(*id)arg2 ;
-(id)initWithSearchableIndex:(id)arg0 ;
-(id)keyWithMediaItemTypeName:(id)arg0 bundleId:(id)arg1 ;
-(void)_replaceMediaIntents:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)_setSuggestedMediaIntents:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)setPredictionMode:(NSInteger)arg0 forType:(NSInteger)arg1 ;
-(void)setSuggestedMediaIntents:(id)arg0 ;


@end


#endif