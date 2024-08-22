// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef W5WIFICHANNEL_H
#define W5WIFICHANNEL_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface W5WiFiChannel : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger channel; // ivar: _channel
@property (readonly, nonatomic) unsigned int flags; // ivar: _flags


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChannel:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithChannel:(NSInteger)arg0 flags:(unsigned int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif