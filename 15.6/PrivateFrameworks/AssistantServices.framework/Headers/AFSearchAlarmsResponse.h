// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSEARCHALARMSRESPONSE_H
#define AFSEARCHALARMSRESPONSE_H

@class NSArray;


#import "AFSiriResponse.h"

@interface AFSearchAlarmsResponse : AFSiriResponse

@property (copy, nonatomic) NSArray *results; // ivar: _results


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif