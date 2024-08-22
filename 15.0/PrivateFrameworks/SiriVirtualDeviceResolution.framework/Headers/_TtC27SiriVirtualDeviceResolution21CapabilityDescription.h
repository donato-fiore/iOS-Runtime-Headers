// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC27SIRIVIRTUALDEVICERESOLUTION21CAPABILITYDESCRIPTION_H
#define _TTC27SIRIVIRTUALDEVICERESOLUTION21CAPABILITYDESCRIPTION_H

@class NSString, NSNumber, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC27SiriVirtualDeviceResolution21CapabilityDescription : NSObject <NSSecureCoding>

 {
    ? key;
    ? valueSet;
    ? valueRange;
}


@property (nonatomic, readonly) NSString *capabilityKey;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSNumber *valueRangeLowerBound;
@property (nonatomic, readonly) NSNumber *valueRangeUpperBound;
@property (nonatomic, readonly) NSSet *valueSet;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 lowerbound:(CGFloat)arg1 upperbound:(CGFloat)arg2 ;
-(id)initWithKey:(id)arg0 valueSet:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif