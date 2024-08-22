// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIDICIRESPONDER_H
#define MIDICIRESPONDER_H

@class NSMutableArray, NSArray;
@protocol MIDICIProfileResponderDelegate, MIDICIPropertyResponderDelegate;

#import <Foundation/Foundation.h>

#import "MIDICIDeviceInfo.h"

@interface MIDICIResponder : NSObject {
    shared_ptr<LocalCIResponder> _impl;
    unsigned int _serverResponderRef;
    NSMutableArray *_subscribers;
    NSMutableArray *_profileStates;
    unsigned int _midiDestination;
    BOOL _propertiesSupported;
    BOOL _isStarted;
}


@property (readonly, nonatomic) MIDICIDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (readonly, nonatomic) NSArray *initiators; // ivar: initiators
@property (readonly, retain, nonatomic) NSObject<MIDICIProfileResponderDelegate> *profileDelegate; // ivar: _profileDelegate
@property (retain, nonatomic) NSObject<MIDICIPropertyResponderDelegate> *propertyDelegate; // ivar: _propertyDelegate


+(id)description;
-(BOOL)containsValidChannels:(id)arg0 ;
-(BOOL)notifyProfile:(id)arg0 onChannel:(unsigned char)arg1 isEnabled:(BOOL)arg2 ;
-(BOOL)notifyProperty:(id)arg0 onChannel:(unsigned char)arg1 forSubscribers:(id)arg2 ;
-(BOOL)sendProfile:(id)arg0 onChannel:(unsigned char)arg1 profileData:(id)arg2 ;
-(BOOL)start;
-(id)description;
-(id)getInitiators;
-(id)init;
-(id)initWithDeviceInfo:(id)arg0 profileDelegate:(id)arg1 profileStates:(id)arg2 supportProperties:(BOOL)arg3 ;
-(void)registerProfiles:(id)arg0 ;
-(void)stop;


@end


#endif