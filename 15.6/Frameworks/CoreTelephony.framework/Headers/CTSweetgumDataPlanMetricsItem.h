// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTSWEETGUMDATAPLANMETRICSITEM_H
#define CTSWEETGUMDATAPLANMETRICSITEM_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSweetgumDataPlanMetricsItem : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *capacityBytes; // ivar: _capacityBytes


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif