// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPHVMSYNCSESSIONMANAGER_H
#define NPHVMSYNCSESSIONMANAGER_H

@class NSMutableArray, NSString;
@protocol SYSessionDelegate, SYChangeSerializer, NPHVMSessionDelegate;

#import <Foundation/Foundation.h>


@interface NPHVMSyncSessionManager : NSObject <SYSessionDelegate, SYChangeSerializer>

 {
    NSMutableArray *_deltaSyncChanges;
    NSMutableArray *_deltaSyncChangeTypes;
    NSUInteger _deltaSyncCurrentIdx;
    id *_completionCallback;
    BOOL _cancel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL sessionInvalidated; // ivar: _sessionInvalidated
@property (readonly) Class superclass;
@property (nonatomic) NSObject<NPHVMSessionDelegate> *vmSessionDelegate; // ivar: _vmSessionDelegate
@property (copy, nonatomic) id *vmSessionProgressCallback; // ivar: _vmSessionProgressCallback


-(BOOL)syncSession:(id)arg0 resetDataStoreWithError:(*id)arg1 ;
-(id)changeFromData:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)dataFromChange:(id)arg0 ;
-(id)decodeChangeData:(id)arg0 fromProtocolVersion:(NSInteger)arg1 ofType:(NSInteger)arg2 ;
-(id)encodeSYChangeForBackwardCompatibility:(id)arg0 protocolVersion:(NSInteger)arg1 ;
-(id)init;
// -(unsigned int)syncSession:(id)arg0 enqueueChanges:(id)arg1 error:(unk)arg2  ;
-(void)cancel;
-(void)enqueueVoicemailChanges:(id)arg0 changeType:(NSInteger)arg1 ;
-(void)syncSession:(id)arg0 applyChanges:(id)arg1 completion:(id)arg2 ;
-(void)syncSession:(id)arg0 didEndWithError:(id)arg1 ;


@end


#endif