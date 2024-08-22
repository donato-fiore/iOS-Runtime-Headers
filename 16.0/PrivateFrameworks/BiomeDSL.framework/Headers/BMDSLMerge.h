// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDSLMERGE_H
#define BMDSLMERGE_H



#import "BMDSL.h"

@interface BMDSLMerge : BMDSL

@property (readonly, nonatomic) BMDSL *a; // ivar: _a
@property (readonly, nonatomic) BMDSL *b; // ivar: _b


+(BOOL)supportsSecureCoding;
-(id)initWithA:(id)arg0 b:(id)arg1 ;
-(id)initWithA:(id)arg0 b:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif