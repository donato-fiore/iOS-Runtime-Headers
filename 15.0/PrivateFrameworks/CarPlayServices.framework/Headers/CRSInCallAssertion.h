// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRSINCALLASSERTION_H
#define CRSINCALLASSERTION_H

@class BSServiceConnection, NSString;
@protocol CRSInCallServerToClientInterface, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface CRSInCallAssertion : NSObject <CRSInCallServerToClientInterface, BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    BOOL _lock_pendingPresent;
    BOOL _lock_presented;
    BOOL _lock_activated;
    BOOL _lock_invalidated;
    BOOL _lock_allowsBanners;
}


@property (nonatomic) BOOL allowsBanners;
@property (retain, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)initWithReason:(id)arg0 ;
-(void)_handleConnectionActivated;
-(void)_handleConnectionInterrupted;
-(void)activate;
-(void)invalidate;


@end


#endif