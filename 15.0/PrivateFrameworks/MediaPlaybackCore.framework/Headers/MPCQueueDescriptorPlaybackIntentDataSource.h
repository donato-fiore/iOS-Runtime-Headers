// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCQUEUEDESCRIPTORPLAYBACKINTENTDATASOURCE_H
#define MPCQUEUEDESCRIPTORPLAYBACKINTENTDATASOURCE_H

@class NSString;
@protocol MPCPlaybackIntentDataSource;

#import <Foundation/Foundation.h>


@interface MPCQueueDescriptorPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)getPlaybackContextForIntent:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif