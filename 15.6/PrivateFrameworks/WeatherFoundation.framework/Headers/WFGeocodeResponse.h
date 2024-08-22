// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFGEOCODERESPONSE_H
#define WFGEOCODERESPONSE_H

@protocol NSSecureCoding;


#import "WFResponse.h"
#import "WFLocation.h"

@interface WFGeocodeResponse : WFResponse <NSSecureCoding>



@property (readonly) WFLocation *location; // ivar: _location


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 location:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif