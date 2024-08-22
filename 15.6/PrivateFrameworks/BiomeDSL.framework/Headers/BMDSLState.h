// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMDSLSTATE_H
#define BMDSLSTATE_H

@class NSString;
@protocol BMDSLStateValue;


#import "BMDSL.h"

@interface BMDSLState : BMDSL

@property (retain, nonatomic) NSObject<BMDSLStateValue> *combinedValue; // ivar: _combinedValue
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) BMDSL *upstream; // ivar: _upstream
@property (readonly, nonatomic) NSObject<BMDSLStateValue> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)bpsPublisher;
-(id)combinedState;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 version:(unsigned int)arg1 upstream:(id)arg2 key:(id)arg3 value:(id)arg4 ;
-(id)initWithUpstream:(id)arg0 key:(id)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif