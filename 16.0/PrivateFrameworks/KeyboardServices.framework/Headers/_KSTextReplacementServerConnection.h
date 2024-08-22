// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _KSTEXTREPLACEMENTSERVERCONNECTION_H
#define _KSTEXTREPLACEMENTSERVERCONNECTION_H

@class NSXPCConnection, NSString;
@protocol _KSTextReplacementServiceProtocol;

#import <Foundation/Foundation.h>


@interface _KSTextReplacementServerConnection : NSObject <_KSTextReplacementServiceProtocol>

 {
    NSXPCConnection *_serviceConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceConnection;
-(id)init;
-(id)textReplacementEntries;
-(void)addEntries:(id)arg0 removeEntries:(id)arg1 withReply:(id)arg2 ;
-(void)cancelPendingUpdatesWithReply:(id)arg0 ;
-(void)dealloc;
-(void)queryTextReplacementEntriesWithReply:(id)arg0 ;
-(void)queryTextReplacementsWithPredicate:(id)arg0 reply:(id)arg1 ;
-(void)removeAllEntries;
-(void)requestSyncWithReply:(id)arg0 ;


@end


#endif