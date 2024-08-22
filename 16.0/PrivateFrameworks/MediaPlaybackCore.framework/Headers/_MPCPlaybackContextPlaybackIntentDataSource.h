// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPCPLAYBACKCONTEXTPLAYBACKINTENTDATASOURCE_H
#define _MPCPLAYBACKCONTEXTPLAYBACKINTENTDATASOURCE_H

@class NSString;
@protocol MPCPlaybackIntentDataSource;

#import <Foundation/Foundation.h>


@interface _MPCPlaybackContextPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)getPlaybackContextForIntent:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif