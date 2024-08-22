// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALDISPLAYSCENESNAPSHOTREQUESTSTRATEGY_H
#define SBEXTERNALDISPLAYSCENESNAPSHOTREQUESTSTRATEGY_H

@class NSString;
@protocol SBSceneSnapshotRequestStrategy;

#import <Foundation/Foundation.h>


@interface SBExternalDisplaySceneSnapshotRequestStrategy : NSObject <SBSceneSnapshotRequestStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)snapshotRequestsForSceneHandle:(id)arg0 settings:(id)arg1 snapshotRequestContext:(id)arg2 ;


@end


#endif