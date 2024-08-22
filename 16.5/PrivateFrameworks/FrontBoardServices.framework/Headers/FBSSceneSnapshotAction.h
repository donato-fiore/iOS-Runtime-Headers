// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSSCENESNAPSHOTACTION_H
#define FBSSCENESNAPSHOTACTION_H

@class NSMutableArray, BSActionResponder, BSSettings, NSString;
@protocol FBSSceneSnapshotRequestDelegate;


#import "FBSSceneAction.h"
#import "FBSSceneSnapshotRequestHandle.h"

@interface FBSSceneSnapshotAction : FBSSceneAction <FBSSceneSnapshotRequestDelegate>

 {
    NSMutableArray *_requests;
    FBSSceneSnapshotRequestHandle *_outgoingRequestHandle;
    int _expired;
    BSActionResponder *_responder;
}


@property (copy, nonatomic) BSSettings *clientExtendedData; // ivar: _clientExtendedData
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat expirationInterval;
@property (readonly, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *requestHandler; // ivar: _requestHandler
@property (readonly) Class superclass;


-(BOOL)_remainsActionable;
-(BOOL)snapshotRequest:(id)arg0 performWithContext:(id)arg1 ;
-(BOOL)snapshotRequestAllowSnapshot:(id)arg0 ;
-(Class)fallbackXPCEncodableClass;
-(id)initWithRequests:(id)arg0 expirationInterval:(CGFloat)arg1 responseHandler:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)_executeNextRequest;
-(void)_finishAllRequests;
-(void)encodeWithXPCDictionary:(id)arg0 ;
// -(void)executeRequestsWithHandler:(id)arg0 completionHandler:(unk)arg1 expirationHandler:(id)arg2  ;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg0 ;
-(void)setNullificationHandler:(id)arg0 ;


@end


#endif