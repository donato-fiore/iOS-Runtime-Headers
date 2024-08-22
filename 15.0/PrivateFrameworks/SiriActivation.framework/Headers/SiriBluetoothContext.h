// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIBLUETOOTHCONTEXT_H
#define SIRIBLUETOOTHCONTEXT_H

@class NSNumber, NSString;


#import "SiriContext.h"

@interface SiriBluetoothContext : SiriContext {
    NSNumber *_isTemporaryDevice;
    NSNumber *_isEyesFree;
}


@property (readonly, nonatomic) NSString *address; // ivar: _address


+(BOOL)supportsSecureCoding;
-(BOOL)isEyesFree;
-(BOOL)isTemporaryDevice;
-(id)description;
-(id)initWithBluetoothDevice:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif