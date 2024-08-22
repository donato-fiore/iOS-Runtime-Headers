// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUBONJOURBROWSER_H
#define CUBONJOURBROWSER_H

@class NSMutableDictionary, NSArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUBonjourBrowser : NSObject {
    BOOL _activateCalled;
    BOOL _activated;
    *BonjourBrowser _bonjourBrowser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_deviceMap;
    *LogCategory _ucat;
    BOOL _browseFlagsChanged;
}


@property (nonatomic) NSUInteger browseFlags; // ivar: _browseFlags
@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (nonatomic) unsigned int controlFlags; // ivar: _controlFlags
@property (copy, nonatomic) id *deviceChangedHandler; // ivar: _deviceChangedHandler
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (readonly, copy) NSArray *devices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(int)_bonjourStart;
-(void)_activateSafeInvokeBlock:(id)arg0 ;
-(void)_bonjourHandleAddOrUpdateDevice:(id)arg0 ;
-(void)_bonjourHandleEventType:(unsigned int)arg0 info:(id)arg1 ;
-(void)_bonjourHandleRemoveDevice:(id)arg0 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)_lostAllDevices;
-(void)_update;
-(void)_updateLocked;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)update;


@end


#endif