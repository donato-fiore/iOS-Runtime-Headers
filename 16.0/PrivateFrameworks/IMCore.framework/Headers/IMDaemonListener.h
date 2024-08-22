// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDAEMONLISTENER_H
#define IMDAEMONLISTENER_H

@class NSMutableDictionary, NSArray, NSString, NSDictionary;
@protocol IMDaemonListening_Internal, IMDaemonListening;

#import <Foundation/Foundation.h>


@interface IMDaemonListener : NSObject <IMDaemonListening_Internal, IMDaemonListening>



@property (readonly, nonatomic) NSMutableDictionary *_contexts;
@property (nonatomic, setter=_setHidingDisconnect:) BOOL _hidingDisconnect;
@property (readonly, nonatomic) NSArray *allServices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPostedSetupComplete;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHoldingChatMessages) BOOL holdingChatMessages;
@property (readonly, nonatomic) unsigned int myIdleTime;
@property (readonly, nonatomic) NSUInteger myStatus;
@property (readonly, nonatomic) NSString *myStatusMessage;
@property (readonly, nonatomic) NSDictionary *persistentProperties;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic, getter=isSetupComplete) BOOL setupComplete;
@property (readonly, nonatomic) BOOL shouldHoldChatMessages;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger vcCapabilities;


-(id)_stampForContext:(id)arg0 ;
-(id)serviceWithName:(id)arg0 ;
-(id)valueOfPersistentProperty:(id)arg0 ;
-(id)valueOfProperty:(id)arg0 ;
-(void)_resetPostedSetupCompleted;
-(void)_setStamp:(id)arg0 forContext:(id)arg1 ;
-(void)addHandler:(id)arg0 ;
-(void)holdChatMessages;
-(void)releaseHeldChatMessages;
-(void)removeHandler:(id)arg0 ;


@end


#endif