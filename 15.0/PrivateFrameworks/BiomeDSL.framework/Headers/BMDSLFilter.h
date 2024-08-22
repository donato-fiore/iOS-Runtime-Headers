// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMDSLFILTER_H
#define BMDSLFILTER_H

@class NSString;
@protocol NSSecureCoding;


#import "BMDSL.h"

@interface BMDSLFilter : BMDSL

@property (readonly, nonatomic) NSInteger comparison; // ivar: _comparison
@property (readonly, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, nonatomic) BOOL negation; // ivar: _negation
@property (readonly, nonatomic) BMDSL *upstream; // ivar: _upstream
@property (readonly, nonatomic) NSObject<NSSecureCoding> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)name;
-(id)bpsPublisher;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithUpstream:(id)arg0 keyPath:(id)arg1 comparison:(NSInteger)arg2 negation:(BOOL)arg3 value:(id)arg4 ;
-(id)initWithUpstream:(id)arg0 keyPath:(id)arg1 comparison:(NSInteger)arg2 negation:(BOOL)arg3 value:(id)arg4 name:(id)arg5 version:(unsigned int)arg6 ;
-(id)initWithUpstream:(id)arg0 keyPath:(id)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif