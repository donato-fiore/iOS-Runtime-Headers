// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARACTIVENAVIGATIONIDENTIFIERSOBSERVER_H
#define CARACTIVENAVIGATIONIDENTIFIERSOBSERVER_H

@class NSArray, NSXPCConnection, NSString;
@protocol CRCarPlayNavigationOwnerClient, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CARObserverHashTable.h"

@interface CARActiveNavigationIdentifiersObserver : NSObject <CRCarPlayNavigationOwnerClient, BSInvalidatable>



@property (readonly, copy, nonatomic) NSArray *activeNavigationIdentifiers; // ivar: _activeNavigationIdentifiers
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
-(void)_setupConnection;
-(void)activeNavigationIdentifiersChangedTo:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)invalidate;
-(void)navigationOwnershipChangedTo:(NSUInteger)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif