// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDSLORDEREDMERGE_H
#define BMDSLORDEREDMERGE_H

@class NSString;


#import "BMDSL.h"

@interface BMDSLOrderedMerge : BMDSL

@property (readonly, nonatomic) BMDSL *a; // ivar: _a
@property (readonly, nonatomic) BMDSL *b; // ivar: _b
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSString *selectorName; // ivar: _selectorName


+(BOOL)supportsSecureCoding;
-(id)initWithA:(id)arg0 b:(id)arg1 key:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithA:(id)arg0 b:(id)arg1 key:(id)arg2 selector:(SEL)arg3 name:(id)arg4 version:(unsigned int)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif