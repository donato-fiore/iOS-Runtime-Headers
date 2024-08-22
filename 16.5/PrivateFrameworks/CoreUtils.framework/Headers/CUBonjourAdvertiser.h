// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUBONJOURADVERTISER_H
#define CUBONJOURADVERTISER_H

@class NSString, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUBonjourAdvertiser : NSObject {
    BOOL _activated;
    *BonjourAdvertiserPrivate _bonjourAdvertiser;
    BOOL _invalidateCalled;
    BOOL _started;
    *LogCategory _ucat;
    BOOL _updatePending;
    BOOL _advertiseFlagsChanged;
    BOOL _domainChanged;
    BOOL _interfaceIndexChanged;
    BOOL _interfaceNameChanged;
    BOOL _nameChanged;
    BOOL _portChanged;
    BOOL _serviceTypeChanged;
    BOOL _txtDictionaryChanged;
}


@property (nonatomic) NSUInteger advertiseFlags; // ivar: _advertiseFlags
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) unsigned int interfaceIndex; // ivar: _interfaceIndex
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int port; // ivar: _port
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (copy, nonatomic) NSDictionary *txtDictionary; // ivar: _txtDictionary


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_activateLocked;
-(void)_activateSafeInvokeBlock:(id)arg0 ;
-(void)_updateLocked;
-(void)_updateTXTDictionary;
-(void)activate;
-(void)dealloc;
-(void)invalidate;


@end


#endif