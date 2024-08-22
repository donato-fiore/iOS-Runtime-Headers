// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTILEREQUESTBALANCER_H
#define GEOTILEREQUESTBALANCER_H

@class NSString;
@protocol GEOPListStateCapturing;

#import <Foundation/Foundation.h>


@interface GEOTileRequestBalancer : NSObject <GEOPListStateCapturing>

 {
    *void _requesters;
    *void _randomIndexGenerator;
    NSUInteger _maxRunningOperationsCount;
    NSUInteger _stateCaptureHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)maxRunningOperationsCount;
+(id)balancerForRequester:(id)arg0 tileKeys:(id)arg1 priorities:(id)arg2 ;
+(void)setMaxRunningOperationsCount:(NSUInteger)arg0 ;
-(*void)requesters;
-(id)_initWithMaxRunningOperationsCount:(NSUInteger)arg0 ;
-(id)captureStatePlistWithHints:(struct os_state_hints_s *)arg0 ;
-(id)init;
-(struct __wrap_iter<(anonymous namespace)::RequesterTileKeys *> )_next_requester;
-(void)_addRequester:(id)arg0 tileKeys:(id)arg1 priorities:(id)arg2 ;
-(void)_pruneEmptyRequesters;
-(void)_removeRequester:(id)arg0 ;
-(void)_requester:(id)arg0 incrementRunningOperationsCount:(NSInteger)arg1 ;
-(void)_requester:(id)arg0 removeTileKey:(struct _GEOTileKey )arg1 ;
-(void)_requester:(id)arg0 updatePriority:(unsigned int)arg1 tileKey:(struct _GEOTileKey )arg2 ;
-(void)_startOperations;
-(void)_startOperationsWithAvailableCount:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)removeRequester:(id)arg0 ;
-(void)requester:(id)arg0 completedOperations:(NSUInteger)arg1 ;
-(void)requester:(id)arg0 removeTileKey:(struct _GEOTileKey *)arg1 ;
-(void)requester:(id)arg0 updatePriority:(unsigned int)arg1 tileKey:(struct _GEOTileKey *)arg2 ;


@end


#endif