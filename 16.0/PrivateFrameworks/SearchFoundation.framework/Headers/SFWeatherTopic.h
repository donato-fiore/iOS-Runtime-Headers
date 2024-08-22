// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFWEATHERTOPIC_H
#define SFWEATHERTOPIC_H

@class NSString;
@protocol SFWeatherTopic;


#import "SFQueryTopic.h"
#import "SFLatLng.h"

@interface SFWeatherTopic : SFQueryTopic <SFWeatherTopic>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) SFLatLng *location; // ivar: _location
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) int queryType;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuery:(id)arg0 location:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif