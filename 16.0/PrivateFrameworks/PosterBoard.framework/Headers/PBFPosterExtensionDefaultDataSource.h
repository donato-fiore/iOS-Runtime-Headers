// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTEREXTENSIONDEFAULTDATASOURCE_H
#define PBFPOSTEREXTENSIONDEFAULTDATASOURCE_H

@class _EXQueryController, NSString, NSArray;
@protocol _EXQueryControllerDelegate, PBFPosterExtensionProvider, OS_dispatch_queue, PBFPosterExtensionProviderDelegate;

#import <Foundation/Foundation.h>


@interface PBFPosterExtensionDefaultDataSource : NSObject <_EXQueryControllerDelegate, PBFPosterExtensionProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<PBFPosterExtensionProviderDelegate> *_dataStoreDelegate;
    _EXQueryController *_queryController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *knownPosterExtensions; // ivar: _knownPosterExtensions
@property (readonly) Class superclass;


+(id)queries;
-(id)init;
-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(void)_queue_notifyDataStoreOfUpdatedExtensions:(id)arg0 ;
-(void)invalidate;
-(void)queryControllerDidUpdate:(id)arg0 resultDifference:(id)arg1 ;
-(void)start;


@end


#endif