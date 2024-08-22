// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCMODELPLAYBACKINTENTDATASOURCE_H
#define MPCMODELPLAYBACKINTENTDATASOURCE_H

@class NSString;
@protocol MPCPlaybackIntentDataSource;

#import <Foundation/Foundation.h>


@interface MPCModelPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)getPlaybackContextForIntent:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif