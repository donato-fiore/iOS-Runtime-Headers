// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVDCAPABILITYDESCRIPTION_H
#define SVDCAPABILITYDESCRIPTION_H

@class NSString, NSNumber, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_TtC27SiriVirtualDeviceResolution21CapabilityDescription.h"

@interface SVDCapabilityDescription : NSObject <NSSecureCoding>

 {
    _TtC27SiriVirtualDeviceResolution21CapabilityDescription *_backing;
}


@property (readonly, nonatomic) NSString *capabilityKey;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSNumber *valueRangeLowerBound;
@property (readonly, nonatomic) NSNumber *valueRangeUpperBound;
@property (readonly, nonatomic) NSSet *valueSet;


+(BOOL)supportsSecureCoding;
-(id)initWithBacking:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 valueRangeWithLowerBound:(CGFloat)arg1 upperBound:(CGFloat)arg2 ;
-(id)initWithKey:(id)arg0 valueSet:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif