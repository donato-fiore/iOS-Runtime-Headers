// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSXPCCONNECTION_H
#define CSXPCCONNECTION_H

@class NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSXPCConnection : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (readonly, nonatomic) BOOL listener; // ivar: _listener
@property (readonly, nonatomic) BOOL machService; // ivar: _machService
@property (nonatomic) BOOL nonLaunching; // ivar: _nonLaunching
@property (nonatomic) BOOL privateDaemon; // ivar: _privateDaemon
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (nonatomic) unsigned int user; // ivar: _user
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)dictionary:(id)arg0 setSharedMemory:(*void)arg1 forKey:(char *)arg2 size:(NSUInteger)arg3 forSizeKey:(char *)arg4 ;
+(BOOL)journalEnabled;
+(id)appIdentifierFromTeamAppTuple:(id)arg0 ;
+(id)constructArray:(id)arg0 ;
+(id)constructDictionary:(id)arg0 ;
+(id)copyNSArrayFromXPCObject:(id)arg0 ;
+(id)copyNSDataForKey:(char *)arg0 fromXPCDictionary:(id)arg1 ;
+(id)copyNSDictionaryFromXPCObject:(id)arg0 ;
+(id)copyNSNumberArrayFromXPCArray:(id)arg0 ;
+(id)copyNSObject:(id)arg0 ;
+(id)copyNSString:(id)arg0 ;
+(id)copyNSStringArrayFromXPCArray:(id)arg0 ;
+(id)copyNSStringForKey:(char *)arg0 fromXPCDictionary:(id)arg1 ;
+(id)copyNSStringOrDictArrayFromXPCArray:(id)arg0 ;
+(id)copyNSStringSetFromXPCArray:(id)arg0 ;
+(id)copyPlistFromXPCObject:(id)arg0 ;
+(id)dataWrapperForKey:(char *)arg0 sizeKey:(char *)arg1 fromXPCDictionary:(id)arg2 ;
+(id)dataWrapperForKey:(char *)arg0 sizeKey:(char *)arg1 fromXPCDictionary:(id)arg2 allowWritableSharedMemory:(BOOL)arg3 ;
+(id)processNameForPID:(int)arg0 ;
+(void)array:(id)arg0 setValue:(id)arg1 atIndex:(NSInteger)arg2 ;
+(void)dictionary:(id)arg0 setNumberArray:(id)arg1 forKey:(char *)arg2 ;
+(void)dictionary:(id)arg0 setPlistBytes:(struct __MDPlistBytes *)arg1 forKey:(char *)arg2 sizeKey:(char *)arg3 ;
+(void)dictionary:(id)arg0 setPlistContainer:(struct _MDPlistContainer *)arg1 forKey:(char *)arg2 sizeKey:(char *)arg3 ;
+(void)dictionary:(id)arg0 setStringArray:(id)arg1 forKey:(char *)arg2 ;
+(void)dictionary:(id)arg0 setStringOrDictionaryArray:(id)arg1 forKey:(char *)arg2 ;
+(void)dictionary:(id)arg0 setValue:(id)arg1 forKey:(char *)arg2 ;
+(void)journalDictionary:(id)arg0 toFolderPath:(char *)arg1 forPID:(int)arg2 withLabel:(char *)arg3 andID:(NSUInteger)arg4 ;
+(void)setJournalEnabled:(BOOL)arg0 ;
-(BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg0 ;
-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg0 ;
-(BOOL)handleCommand:(char *)arg0 info:(id)arg1 connection:(id)arg2 ;
-(BOOL)handleMessage:(id)arg0 type:(struct _xpc_type_s *)arg1 connection:(id)arg2 ;
-(BOOL)lostClientConnection:(id)arg0 error:(id)arg1 ;
-(id)initListenerWithName:(id)arg0 ;
-(id)initMachServiceListenerWithName:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 machService:(BOOL)arg1 ;
-(id)initWithServiceName:(id)arg0 machService:(BOOL)arg1 uuid:(id)arg2 ;
-(void)_lostClientConnection:(id)arg0 error:(id)arg1 ;
-(void)handleError:(id)arg0 ;
-(void)handleReply:(id)arg0 ;
-(void)sendMessageAsync:(id)arg0 ;
-(void)sendMessageAsync:(id)arg0 completion:(id)arg1 ;
-(void)startListener;


@end


#endif