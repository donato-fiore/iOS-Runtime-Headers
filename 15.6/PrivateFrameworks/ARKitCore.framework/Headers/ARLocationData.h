// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARLOCATIONDATA_H
#define ARLOCATIONDATA_H

@class NSString, CLLocation;
@protocol ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData, ARDaemonSecureCoding;

#import <Foundation/Foundation.h>


@interface ARLocationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData, ARDaemonSecureCoding>

 {
    ? _locationLLA;
    ? _locationECEF;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? ecefFromlocation; // ivar: _ecefFromlocation
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property ? locationECEF;
@property ? locationLLA;
@property (readonly, nonatomic, getter=isSecure) BOOL secure; // ivar: _secure
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) CGFloat undulation; // ivar: _undulation


+(BOOL)isAltitudeValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)enuFromLocation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithLocation:(id)arg0 ;
-(id)initWithMetadataWrapper:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif