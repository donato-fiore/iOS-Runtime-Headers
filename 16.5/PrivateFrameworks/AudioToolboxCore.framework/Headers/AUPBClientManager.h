// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUPBCLIENTMANAGER_H
#define AUPBCLIENTMANAGER_H

@class NSXPCConnection, NSMutableArray, NSString;
@protocol AUPBRegistrarListening, AUPBInspecting, AUPBRegistrarHosting, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AUPBClientManager : NSObject <AUPBRegistrarListening, AUPBInspecting>

 {
    NSXPCConnection *mRegistrarConnection;
    id<AUPBRegistrarHosting> *mProxyInterface;
    NSMutableArray *mRemoteServers;
    vector<PropertyListener, std::allocator<PropertyListener>> mPropertyListeners;
    vector<NewServerListener, std::allocator<NewServerListener>> mNewServerListeners;
    unsigned int mServerRefCounter;
    NSObject<OS_dispatch_queue> *mTouchServersQueue;
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
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(id)serverFromRef:(struct OpaqueAUPBServer *)arg0 ;
-(int)addNewServerListener:(*unk)arg0 withUserData:(*void)arg1 ;
-(int)addPropertyListener:(*unk)arg0 onServer:(struct OpaqueAUPBServer *)arg1 block:(struct OpaqueAUPB *)arg2 property:(unsigned int)arg3 withUserData:(*void)arg4 ;
-(int)copyPBProperty:(unsigned int)arg0 onServer:(struct OpaqueAUPBServer *)arg1 block:(struct OpaqueAUPB *)arg2 intoValue:(**void)arg3 ;
-(int)getAUParameter:(unsigned int)arg0 onServer:(struct OpaqueAUPBServer *)arg1 audioUnit:(struct OpaqueRemoteAudioUnit *)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4 copiedIntoValue:(*float)arg5 ;
-(int)getAUProperty:(unsigned int)arg0 onServer:(struct OpaqueAUPBServer *)arg1 audioUnit:(struct OpaqueRemoteAudioUnit *)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4 copiedIntoBufer:(**void)arg5 withSize:(*unsigned int)arg6 ;
-(int)getAUPropertyInfo:(unsigned int)arg0 onServer:(struct OpaqueAUPBServer *)arg1 audioUnit:(struct OpaqueRemoteAudioUnit *)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4 intoDataSize:(*unsigned int)arg5 writeable:(char *)arg6 ;
-(int)getSerialAUProperty:(unsigned int)arg0 onServer:(struct OpaqueAUPBServer *)arg1 audioUnit:(struct OpaqueRemoteAudioUnit *)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4 inData:(*id)arg5 ;
-(int)removePropertyListener:(*unk)arg0 onServer:(struct OpaqueAUPBServer *)arg1 block:(struct OpaqueAUPB *)arg2 property:(unsigned int)arg3 withUserData:(*void)arg4 ;
-(int)removePropertyListenersForServer:(struct OpaqueAUPBServer *)arg0 ;
-(int)removeServerListener:(*unk)arg0 withUserData:(*void)arg1 ;
-(int)setAUParameter:(unsigned int)arg0 onServer:(struct OpaqueAUPBServer *)arg1 audioUnit:(struct OpaqueRemoteAudioUnit *)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4 value:(float)arg5 ;
-(int)setAUProperty:(unsigned int)arg0 onServer:(struct OpaqueAUPBServer *)arg1 audioUnit:(struct OpaqueRemoteAudioUnit *)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4 withValue:(*void)arg5 size:(unsigned int)arg6 ;
-(int)setPBProperty:(unsigned int)arg0 onServer:(struct OpaqueAUPBServer *)arg1 block:(struct OpaqueAUPB *)arg2 value:(*void)arg3 ;
-(int)setSerialAUProperty:(unsigned int)arg0 onServer:(struct OpaqueAUPBServer *)arg1 audioUnit:(struct OpaqueRemoteAudioUnit *)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4 toData:(id)arg5 ;
-(struct OpaqueAUPB *)aupbRefFromHandle:(unsigned int)arg0 ;
-(struct OpaqueRemoteAudioUnit *)auRefFromHandle:(unsigned int)arg0 ;
-(unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit *)arg0 ;
-(void)dealloc;
-(void)handleRegistrarCrash;
-(void)newServerAdded:(id)arg0 ;
-(void)processingBlock:(unsigned int)arg0 propertiesChanged:(id)arg1 withQualifierData:(id)arg2 ;
-(void)processingBlock:(unsigned int)arg0 propertyChanged:(unsigned int)arg1 ;
-(void)release;
-(void)startRegistarConnection;


@end


#endif