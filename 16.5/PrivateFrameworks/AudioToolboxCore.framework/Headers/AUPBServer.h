// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUPBSERVER_H
#define AUPBSERVER_H

@class NSXPCConnection, NSXPCListener, NSMutableArray, NSString;
@protocol NSXPCListenerDelegate, AUPBServing, AUPBRegistrarHosting;

#import <Foundation/Foundation.h>


@interface AUPBServer : NSObject <NSXPCListenerDelegate, AUPBServing>

 {
    NSXPCConnection *mRegistrarConnection;
    id<AUPBRegistrarHosting> *mProxyInterface;
    NSXPCListener *mListener;
    NSMutableArray *mClientConnections;
    unique_ptr<CADeprecated::CAMutex, std::default_delete<CADeprecated::CAMutex>> mLock;
    map<unsigned int, RemoteAUHandleInfo, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, RemoteAUHandleInfo>>> mAUHandlesToInfo;
    map<unsigned int, AUProcessingBlock, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, AUProcessingBlock>>> mBlockHandlesToMethods;
    unsigned int mAUPBRefCounter;
    unique_ptr<TestAUProcessingBlock, std::default_delete<TestAUProcessingBlock>> mTestBlock;
    unsigned int mAUHandleCntr;
    int mNotifyToken;
    BOOL mValidToken;
    BOOL mConnectionAcknowledged;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(int)registerAU:(struct OpaqueRemoteAudioUnit *)arg0 inBlock:(struct OpaqueAUPB *)arg1 ;
-(int)unregisterAU:(struct OpaqueRemoteAudioUnit *)arg0 ;
-(int)unregisterBlock:(struct OpaqueAUPB *)arg0 ;
-(struct AUProcessingBlock *)aupbFromAUHandle:(unsigned int)arg0 ;
-(struct AUProcessingBlock *)aupbFromRef:(struct OpaqueAUPB *)arg0 ;
-(struct OpaqueAUPB *)registerBlock:(struct AUPBMethods *)arg0 withUserData:(*void)arg1 ;
-(struct OpaqueRemoteAudioUnit *)auRefFromHandle:(unsigned int)arg0 ;
-(unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit *)arg0 ;
-(unsigned int)handleFromAUPBRef:(struct OpaqueAUPB *)arg0 ;
-(void)blockListChanged;
-(void)checkConnectRegistrar;
-(void)copyProcessingBlock:(unsigned int)arg0 property:(unsigned int)arg1 intoReply:(id)arg2 ;
-(void)dealloc;
-(void)getAudioUnit:(unsigned int)arg0 parameter:(unsigned int)arg1 onScope:(unsigned int)arg2 element:(unsigned int)arg3 inReply:(id)arg4 ;
-(void)getAudioUnit:(unsigned int)arg0 property:(unsigned int)arg1 onScope:(unsigned int)arg2 element:(unsigned int)arg3 inReply:(id)arg4 ;
-(void)getAudioUnit:(unsigned int)arg0 propertyInfo:(unsigned int)arg1 onScope:(unsigned int)arg2 element:(unsigned int)arg3 inReply:(id)arg4 ;
-(void)handleRegistrarCrash;
-(void)processingBlock:(struct OpaqueAUPB *)arg0 properties:(*unsigned int)arg1 count:(unsigned int)arg2 changedWithQualifierData:(*void)arg3 length:(unsigned int)arg4 ;
-(void)processingBlockRef:(struct OpaqueAUPB *)arg0 propertyChanged:(unsigned int)arg1 ;
-(void)release;
-(void)setAudioUnit:(unsigned int)arg0 parameter:(unsigned int)arg1 onScope:(unsigned int)arg2 element:(unsigned int)arg3 value:(float)arg4 withReply:(id)arg5 ;
-(void)setAudioUnit:(unsigned int)arg0 property:(unsigned int)arg1 onScope:(unsigned int)arg2 element:(unsigned int)arg3 value:(id)arg4 withReply:(id)arg5 ;
-(void)setProcessingBlock:(unsigned int)arg0 property:(unsigned int)arg1 value:(id)arg2 withReply:(id)arg3 ;
-(void)startRegistrarConnection;


@end


#endif