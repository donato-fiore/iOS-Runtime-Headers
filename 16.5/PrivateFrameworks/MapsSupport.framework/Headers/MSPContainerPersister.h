// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPCONTAINERPERSISTER_H
#define MSPCONTAINERPERSISTER_H

@protocol MSPContainerPersisterDelegate;

#import <Foundation/Foundation.h>


@interface MSPContainerPersister : NSObject

@property (weak, nonatomic) NSObject<MSPContainerPersisterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger duplicatesPolicy; // ivar: _duplicatesPolicy


-(void)commitByMergingWithStateSnapshot:(id)arg0 mergeOptions:(id)arg1 completion:(id)arg2 ;
-(void)commitEditWithNewContents:(id)arg0 edits:(id)arg1 appliedToOldContents:(id)arg2 completion:(id)arg3 ;
-(void)eraseWithCompletion:(id)arg0 ;
-(void)fetchStateSnapshotWithCompletion:(id)arg0 ;


@end


#endif