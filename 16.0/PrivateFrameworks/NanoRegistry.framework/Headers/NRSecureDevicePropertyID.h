// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRSECUREDEVICEPROPERTYID_H
#define NRSECUREDEVICEPROPERTYID_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NRSecureDevicePropertyID : NSObject <NSCopying, NSSecureCoding>

 {
    NSUUID *_uuid;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithPropertyString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif