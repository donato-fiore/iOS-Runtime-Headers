// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI12CHARTCONTEXT_H
#define _TTC18HEALTHEXPERIENCEUI12CHARTCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC18HealthExperienceUI12ChartContext : NSObject <NSSecureCoding>

 {
    ? date;
    ? dateInterval;
    ? preferredOverlayRawValue;
    ? trendActiveRawValue;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif