// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPENCODERWRITECOORDINATOR_H
#define TSPENCODERWRITECOORDINATOR_H

@class NSMutableArray, TSURetainedPointerKeyDictionary, NSString, NSURL;
@protocol TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPObjectModifyDelegate, TSPProxyObjectWriting, TSPProxyObjectMapping, TSPEncoder, TSPEncoderWriteCoordinatorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSPArchiverManager.h"
#import "TSPReferenceOrderedSet.h"
#import "TSPObjectContext.h"

@interface TSPEncoderWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPObjectModifyDelegate, TSPProxyObjectWriting, TSPProxyObjectMapping>

 {
    id<TSPEncoder> *_encoder;
    TSPArchiverManager *_archiverManager;
    id<TSPEncoderWriteCoordinatorDelegate> *_delegate;
    uint8_t _didStopCapturingSnapshots;
    NSMutableArray *_dataFinalizeHandlers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPReferenceOrderedSet *_delayedObjects;
    BOOL _hasProxyObjects;
    TSURetainedPointerKeyDictionary *_proxyObjectMap;
}


@property (readonly, weak, nonatomic) TSPObjectContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *relativeURLForExternalData;
@property (readonly) Class superclass;


-(BOOL)archiverManager:(id)arg0 shouldDelayArchivingObject:(id)arg1 ;
-(BOOL)componentWriter:(id)arg0 shouldDelayWritingObject:(id)arg1 ;
-(BOOL)shouldDelayArchivingObject:(id)arg0 ;
-(NSUInteger)objectTargetType;
-(NSUInteger)objectTargetTypeForComponentWriter:(id)arg0 ;
-(id)componentWriter:(id)arg0 wantsComponentOfObject:(id)arg1 componentReadVersion:(*NSUInteger)arg2 ;
-(id)componentWriter:(id)arg0 wantsExplicitComponentRootObjectForObject:(id)arg1 archiverOrNil:(id)arg2 claimingComponent:(id)arg3 hasArchiverAccessLock:(BOOL)arg4 ;
-(id)componentWriterWantsDelayedObjects:(id)arg0 ;
-(id)init;
-(id)initWithEncoder:(id)arg0 context:(id)arg1 archiverClass:(Class)arg2 delegate:(id)arg3 ;
-(id)proxyForReferencedObject:(id)arg0 ;
-(void)addDataFinalizeHandlerForSuccessfulSave:(id)arg0 ;
-(void)archiverManager:(id)arg0 didCreateArchiver:(id)arg1 ;
-(void)componentWriter:(id)arg0 canSkipArchivingStronglyReferencedObject:(id)arg1 fromComponentRootObject:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)delayArchivingOfObject:(id)arg0 ;
-(void)setProxy:(id)arg0 forReferencedObject:(id)arg1 ;
-(void)skipArchivingObject:(id)arg0 ;
-(void)stopCapturingSnapshots;
-(void)willModifyObject:(id)arg0 options:(NSUInteger)arg1 ;
-(void)writeRootObject:(id)arg0 completion:(id)arg1 ;


@end


#endif