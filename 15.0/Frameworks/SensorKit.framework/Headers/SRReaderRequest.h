// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRREADERREQUEST_H
#define SRREADERREQUEST_H

@class NSString;
@protocol SRRequestReading;

#import <Foundation/Foundation.h>


@interface SRReaderRequest : NSObject <SRRequestReading>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *sensor; // ivar: _sensor
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif