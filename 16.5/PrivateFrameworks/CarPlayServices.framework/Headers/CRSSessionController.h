// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRSSESSIONCONTROLLER_H
#define CRSSESSIONCONTROLLER_H

@class BSServiceConnection, NSString, RBSProcessHandle;
@protocol CRSSessionServerToClientInterface;

#import <Foundation/Foundation.h>


@interface CRSSessionController : NSObject <CRSSessionServerToClientInterface>

 {
    os_unfair_lock_s _lock;
    BOOL _lock_invalidated;
}


@property (retain, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RBSProcessHandle *process; // ivar: _process
@property (readonly) Class superclass;


-(id)init;
-(void)invalidate;


@end


#endif