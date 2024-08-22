// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLLOCATIONSOURCEINFORMATION_H
#define CLLOCATIONSOURCEINFORMATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLLocationSourceInformation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL isProducedByAccessory; // ivar: isProducedByAccessory
@property (readonly, nonatomic) BOOL isSimulatedBySoftware; // ivar: isSimulatedBySoftware


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSoftwareSimulationState:(BOOL)arg0 andExternalAccessoryState:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif