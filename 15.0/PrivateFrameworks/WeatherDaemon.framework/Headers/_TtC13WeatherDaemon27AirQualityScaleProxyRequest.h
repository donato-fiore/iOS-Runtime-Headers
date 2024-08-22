// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC13WEATHERDAEMON27AIRQUALITYSCALEPROXYREQUEST_H
#define _TTC13WEATHERDAEMON27AIRQUALITYSCALEPROXYREQUEST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC13WeatherDaemon27AirQualityScaleProxyRequest : NSObject <NSSecureCoding>

 {
    ? name;
    ? options;
}




+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif