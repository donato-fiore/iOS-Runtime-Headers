// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STTIMER_H
#define STTIMER_H

@class NSString, NSNumber;


#import "STSiriModelObject.h"

@interface STTimer : STSiriModelObject

@property (nonatomic) NSInteger state; // ivar: _state
@property (copy, nonatomic) NSString *timerId; // ivar: _timerId
@property (copy, nonatomic) NSNumber *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif