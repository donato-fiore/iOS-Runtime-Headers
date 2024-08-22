// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFBLUETOOTHWIRELESSSPLITTERSESSIONINFO_H
#define AFBLUETOOTHWIRELESSSPLITTERSESSIONINFO_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFBluetoothWirelessSplitterSessionInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *deviceAddresses; // ivar: _deviceAddresses
@property (readonly, nonatomic) NSInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(NSInteger)arg0 deviceAddresses:(id)arg1 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif