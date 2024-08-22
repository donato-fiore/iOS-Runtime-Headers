// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RAMXPC_H
#define RAMXPC_H



#import "BackendXPC.h"

@interface RamXPC : BackendXPC



+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(NSUInteger)arg0 ;
-(void)createRamBackend;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif