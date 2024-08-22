// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPSYNCHRONIZEDCONTAINER_H
#define MSPSYNCHRONIZEDCONTAINER_H

@class NSString;
@protocol MSPContainerObserver, MSPCloudContainerObserver;

#import <Foundation/Foundation.h>

#import "MSPCloudContainer.h"
#import "MSPContainer.h"
#import "MSPCloudSynchronizer.h"

@interface MSPSynchronizedContainer : NSObject <MSPContainerObserver, MSPCloudContainerObserver>



@property (retain, nonatomic) MSPCloudContainer *cloudContainer; // ivar: _cloudContainer
@property (retain, nonatomic) MSPContainer *container; // ivar: _container
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL requiresMerge; // ivar: _requiresMerge
@property (readonly) Class superclass;
@property (weak, nonatomic) MSPCloudSynchronizer *synchronizer; // ivar: _synchronizer


-(id)initWithContainer:(id)arg0 synchronizer:(id)arg1 ;
-(void)cancelMergeWithError:(id)arg0 ;
-(void)cloudContainerDidChange:(id)arg0 ;
-(void)container:(id)arg0 didEditWithNewContents:(id)arg1 orderedEdits:(id)arg2 cause:(NSInteger)arg3 context:(id)arg4 ;
-(void)containerDidEraseContents:(id)arg0 fromStorageTypes:(NSUInteger)arg1 ;
-(void)mergeWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)prepareCloudWithGroup:(id)arg0 completion:(id)arg1 ;


@end


#endif