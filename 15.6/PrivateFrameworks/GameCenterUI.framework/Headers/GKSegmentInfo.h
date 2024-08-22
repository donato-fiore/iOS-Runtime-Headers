// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKSEGMENTINFO_H
#define GKSEGMENTINFO_H

@class NSString;
@protocol _GKStateMachineDelegate, GKSegmentInfoDelegagte;

#import <Foundation/Foundation.h>

#import "GKCollectionViewDataSource.h"
#import "GKPlaceholderContentStateMachine.h"

@interface GKSegmentInfo : NSObject <_GKStateMachineDelegate>



@property (retain, nonatomic) GKCollectionViewDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GKSegmentInfoDelegagte> *delegate; // ivar: _delegateWeak
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GKPlaceholderContentStateMachine *loadingMatchine; // ivar: _loadingMatchine
@property (retain, nonatomic) NSString *loadingState;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithDataSource:(id)arg0 ;
-(void)didEnterErrorState;
-(void)didEnterLoadingState;
-(void)didEnterNoContentState;
-(void)didExitLoadingState;


@end


#endif