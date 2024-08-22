// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPSERVICEUPDATERACCESSORYMATCHINGRULE_H
#define UARPSERVICEUPDATERACCESSORYMATCHINGRULE_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UARPServiceUpdaterAccessoryMatchingRule : NSObject <NSSecureCoding>



@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSDictionary *matchingDictionary; // ivar: _matchingDictionary
@property (readonly) NSString *xpcEventStream; // ivar: _xpcEventStream


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(char *)transportDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 xpcEventStream:(id)arg1 matchingDictionary:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif