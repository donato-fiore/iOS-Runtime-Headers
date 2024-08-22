// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLACCESSORYAGENT_H
#define PLACCESSORYAGENT_H

@class PLAgent, ACCConnectionInfo, NSMutableDictionary, NSString;
@protocol ACCConnectionInfoDelegateProtocol;



@interface PLAccessoryAgent : PLAgent <ACCConnectionInfoDelegateProtocol>



@property (retain) ACCConnectionInfo *accConnectionInfo; // ivar: _accConnectionInfo
@property (retain) NSMutableDictionary *connectedEndpoints; // ivar: _connectedEndpoints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaults;
+(id)entryEventPointDefinitions;
+(id)entryEventPointDefinitionsReceivedPush;
+(void)load;
-(id)init;
-(void)accessoryConnectionAttached:(id)arg0 type:(int)arg1 ;
-(void)accessoryConnectionDetached:(id)arg0 ;
-(void)accessoryEndpointAttached:(id)arg0 transportType:(int)arg1 protocol:(int)arg2 properties:(id)arg3 forConnection:(id)arg4 ;
-(void)accessoryEndpointDetached:(id)arg0 forConnection:(id)arg1 ;
-(void)initOperatorDependancies;


@end


#endif