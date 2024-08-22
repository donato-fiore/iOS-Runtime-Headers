// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARNAVIGATIONOWNERSHIPMANAGER_H
#define CARNAVIGATIONOWNERSHIPMANAGER_H

@class NSXPCConnection, NSString;
@protocol CRCarPlayNavigationOwnerClient, BSInvalidatable, CARNavigationOwnershipManagerDelegate;

#import <Foundation/Foundation.h>


@interface CARNavigationOwnershipManager : NSObject <CRCarPlayNavigationOwnerClient, BSInvalidatable>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CARNavigationOwnershipManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *lastNavigatingBundleIdentifier;
@property (readonly, nonatomic) NSUInteger owner;
@property (nonatomic) BOOL ownershipRequested; // ivar: _ownershipRequested
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 delegate:(id)arg1 ;
-(void)_handleConnectionReset;
-(void)_setupConnection;
-(void)invalidate;
-(void)navigationOwnershipChangedTo:(NSUInteger)arg0 ;
-(void)releaseNavigationOwnership;
-(void)requestNavigationOwnership;


@end


#endif