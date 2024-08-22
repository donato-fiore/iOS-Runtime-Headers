// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTLEAKSSERVICE_H
#define DTLEAKSSERVICE_H

@class DTXService, NSMutableDictionary, NSString;
@protocol DTLeaksServiceLegacyRPC, DTLeaksServiceAuthorizedRPC, OS_dispatch_queue;



@interface DTLeaksService : DTXService <DTLeaksServiceLegacyRPC, DTLeaksServiceAuthorizedRPC>

 {
    NSObject<OS_dispatch_queue> *_coordinationQueue;
    NSObject<OS_dispatch_queue> *_preservationQueue;
    NSMutableDictionary *_helperConnectionByTargetPid;
    NSMutableDictionary *_helperPidByTargetPid;
    NSMutableDictionary *_fileByPid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)_preserveDict:(id)arg0 forPid:(int)arg1 ;
-(id)initWithChannel:(id)arg0 ;
-(id)requestGraph:(NSUInteger)arg0 options:(id)arg1 ;
-(id)requestMallocStackLog:(int)arg0 forAddress:(*NSUInteger)arg1 size:(NSUInteger)arg2 isLiteZone:(unsigned int)arg3 ;
-(id)requestVMregionStackLog:(int)arg0 forAddress:(*NSUInteger)arg1 size:(NSUInteger)arg2 ;
-(int)setMallocStackLoggingMode:(int)arg0 forPid:(int)arg1 ;
-(void)_internalRequestForPid:(int)arg0 message:(id)arg1 completion:(id)arg2 ;
-(void)_lookupGraphByToken:(NSUInteger)arg0 response:(id)arg1 ;
-(void)cancelAllRequests;
-(void)messageReceived:(id)arg0 ;


@end


#endif