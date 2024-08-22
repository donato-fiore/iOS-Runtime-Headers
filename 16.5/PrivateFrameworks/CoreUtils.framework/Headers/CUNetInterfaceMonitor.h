// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUNETINTERFACEMONITOR_H
#define CUNETINTERFACEMONITOR_H

@class NSArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUNetInterfaceMonitor : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *__SCDynamicStore _scStore;
    *LogCategory _ucat;
}


@property (nonatomic) unsigned int controlFlags; // ivar: _controlFlags
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) unsigned int flags; // ivar: _flags
@property (copy, nonatomic) id *flagsChangedHandler; // ivar: _flagsChangedHandler
@property (copy, nonatomic) NSArray *interfaces; // ivar: _interfaces
@property (copy, nonatomic) id *interfacesChangedHandler; // ivar: _interfacesChangedHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *primaryIPChangedHandler; // ivar: _primaryIPChangedHandler
@property (readonly, nonatomic) unk primaryIPv4Addr; // ivar: _primaryIPv4Addr
@property (readonly, nonatomic) unk primaryIPv6Addr; // ivar: _primaryIPv6Addr
@property (copy, nonatomic) id *primaryNetworkChangedHandler; // ivar: _primaryNetworkChangedHandler
@property (readonly, copy, nonatomic) NSString *primaryNetworkSignature; // ivar: _primaryNetworkSignature


-(id)description;
-(id)init;
-(void)_ensureStarted;
-(void)_ensureStopped;
-(void)_invalidate;
-(void)_invalidated;
-(void)_networkInterfacesChanged:(BOOL)arg0 ;
-(void)_primaryIPChanged:(BOOL)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif