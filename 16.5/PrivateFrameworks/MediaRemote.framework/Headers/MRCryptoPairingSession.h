// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRCRYPTOPAIRINGSESSION_H
#define MRCRYPTOPAIRINGSESSION_H

@class NSArray;
@protocol MRCryptoPairingSessionDelegate;

#import <Foundation/Foundation.h>

#import "MRDeviceInfo.h"

@interface MRCryptoPairingSession : NSObject

@property (weak, nonatomic) NSObject<MRCryptoPairingSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) MRDeviceInfo *device; // ivar: _device
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) NSArray *pairedDevices;
@property (readonly, nonatomic) NSUInteger role; // ivar: _role
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)deleteIdentityWithError:(*id)arg0 ;
-(id)decryptData:(id)arg0 withError:(*id)arg1 ;
-(id)encryptData:(id)arg0 withError:(*id)arg1 ;
-(id)init;
-(id)initWithRole:(NSUInteger)arg0 device:(id)arg1 ;
-(id)removePeer;
-(id)updatePeer;
-(void)close;
-(void)handlePairingExchangeData:(id)arg0 completion:(id)arg1 ;
-(void)handlePairingFailureWithStatus:(int)arg0 ;
-(void)open;


@end


#endif