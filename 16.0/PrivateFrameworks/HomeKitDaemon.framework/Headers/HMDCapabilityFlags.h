// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAPABILITYFLAGS_H
#define HMDCAPABILITYFLAGS_H

@class HMFObject, NSData;
@protocol NSSecureCoding;



@interface HMDCapabilityFlags : HMFObject <NSSecureCoding>



@property (readonly) NSData *bytesData; // ivar: _bytesData


+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)hasCapabilities:(id)arg0 ;
-(id)description;
-(id)initWithCapabilities:(id)arg0 ;
-(id)initWithCapabilityOptions:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif