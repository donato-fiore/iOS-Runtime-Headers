// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAPARTIALIP_H
#define DAPARTIALIP_H

@class NSData;
@protocol CUXPCCodable, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAPartialIP : NSObject <CUXPCCodable, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *address; // ivar: _address
@property (readonly, copy, nonatomic) NSData *mask; // ivar: _mask


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithAddress:(id)arg0 mask:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif