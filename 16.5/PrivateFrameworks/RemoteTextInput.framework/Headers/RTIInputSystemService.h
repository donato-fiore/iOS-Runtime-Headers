// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTIINPUTSYSTEMSERVICE_H
#define RTIINPUTSYSTEMSERVICE_H

@class NSMutableSet, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate, RTIInputSystemSessionDelegate, RTIInputSystemDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RTIInputSystemServiceSession.h"

@interface RTIInputSystemService : NSObject <NSXPCListenerDelegate, RTIInputSystemSessionDelegate>

 {
    NSMutableSet *_sessions;
}


@property (readonly, nonatomic) RTIInputSystemServiceSession *currentSession; // ivar: _currentSession
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RTIInputSystemDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *lastAppId; // ivar: _lastAppId
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain, nonatomic) NSString *machName; // ivar: _machName
@property (readonly) Class superclass;


+(Class)serviceSessionClass;
+(id)sharedServiceWithMachName:(id)arg0 ;
-(BOOL)_canResumeConnection;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithMachName:(id)arg0 ;
-(void)_createListenerIfNecessary;
-(void)_destroyListenerIfNecessary;
-(void)dealloc;
-(void)inputSession:(id)arg0 didAddRTISupplementalLexicon:(id)arg1 ;
-(void)inputSession:(id)arg0 didAddSupplementalLexicon:(id)arg1 ;
-(void)inputSession:(id)arg0 didChangePause:(BOOL)arg1 withReason:(id)arg2 ;
-(void)inputSession:(id)arg0 didReceiveConnection:(id)arg1 ;
-(void)inputSession:(id)arg0 didRemoveRTISupplementalLexicon:(id)arg1 ;
-(void)inputSession:(id)arg0 didRemoveSupplementalLexicon:(id)arg1 ;
-(void)inputSession:(id)arg0 documentStateDidChange:(id)arg1 ;
-(void)inputSession:(id)arg0 documentTraitsDidChange:(id)arg1 ;
-(void)inputSession:(id)arg0 performInputOperation:(id)arg1 ;
-(void)inputSession:(id)arg0 performInputOperation:(id)arg1 withResponse:(id)arg2 ;
-(void)inputSession:(id)arg0 textSuggestionsChanged:(id)arg1 ;
-(void)inputSessionDidBegin:(id)arg0 options:(id)arg1 ;
-(void)inputSessionDidDie:(id)arg0 ;
-(void)inputSessionDidEnd:(id)arg0 options:(id)arg1 ;
-(void)prepareForInputSession:(id)arg0 options:(id)arg1 ;


@end


#endif