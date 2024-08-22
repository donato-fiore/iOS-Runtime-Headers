// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLINDOORLOCATION_H
#define CLINDOORLOCATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLIndoorLocation : NSObject <NSSecureCoding>



@property (nonatomic) ? diagnosticReport; // ivar: _diagnosticReport
@property (nonatomic) ? location; // ivar: _location
@property (retain, nonatomic) NSString *locationDescription; // ivar: _locationDescription
@property (retain, nonatomic) NSString *locationId; // ivar: _locationId
@property (nonatomic) ? locationPrivate; // ivar: _locationPrivate
@property (nonatomic) BOOL requestsGpsAssistance; // ivar: _requestsGpsAssistance


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif