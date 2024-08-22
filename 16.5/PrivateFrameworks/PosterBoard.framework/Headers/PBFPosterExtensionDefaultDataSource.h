// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTEREXTENSIONDEFAULTDATASOURCE_H
#define PBFPOSTEREXTENSIONDEFAULTDATASOURCE_H

@class NSArray, _EXQueryController, NSString, NSPredicate;
@protocol _EXQueryControllerDelegate, PBFPosterExtensionProvider, OS_dispatch_queue, PBFPosterExtensionProviderDelegate;

#import <Foundation/Foundation.h>


@interface PBFPosterExtensionDefaultDataSource : NSObject <_EXQueryControllerDelegate, PBFPosterExtensionProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_queue_queries;
    _EXQueryController *_queue_queryController;
    NSArray *_queue_knownPosterExtensions;
    BOOL _queue_started;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBFPosterExtensionProviderDelegate> *delegate; // ivar: _queue_delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *knownPosterExtensions;
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _queue_predicate
@property (readonly) Class superclass;


+(id)extensionKitQuery;
-(id)init;
-(void)_queue_executeQuery;
-(void)_queue_notifyDataStoreOfUpdatedExtensions:(id)arg0 ;
-(void)_queue_start;
-(void)_queue_teardownQueryController;
-(void)invalidate;
-(void)queryControllerDidUpdate:(id)arg0 resultDifference:(id)arg1 ;
-(void)start;


@end


#endif