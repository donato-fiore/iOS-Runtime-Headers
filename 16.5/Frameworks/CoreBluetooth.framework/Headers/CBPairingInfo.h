// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBPAIRINGINFO_H
#define CBPAIRINGINFO_H

@class NSError, NSString;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>

#import "CBDevice.h"

@interface CBPairingInfo : NSObject <CUXPCCodable>



@property (retain, nonatomic) CBDevice *device; // ivar: _device
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) NSInteger pairingType; // ivar: _pairingType
@property (copy, nonatomic) NSString *pin; // ivar: _pin


-(id)description;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif