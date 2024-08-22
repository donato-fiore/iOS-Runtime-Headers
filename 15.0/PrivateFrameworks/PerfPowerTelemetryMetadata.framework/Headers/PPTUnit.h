// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTUNIT_H
#define PPTUNIT_H

@class NSUnit;

#import <Foundation/Foundation.h>


@interface PPTUnit : NSObject

@property (readonly) NSUnit *unit; // ivar: _unit


+(BOOL)isValidUnitJSON:(id)arg0 ;
+(id)celsius;
+(id)seconds;
+(id)unitWithJSONObject:(id)arg0 ;
+(id)unitWithProto:(id)arg0 ;
+(id)volts;
-(id)initWithUnit:(id)arg0 ;
-(id)proto;


@end


#endif