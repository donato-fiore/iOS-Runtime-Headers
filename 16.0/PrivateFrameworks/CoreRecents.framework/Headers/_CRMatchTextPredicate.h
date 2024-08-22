// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CRMATCHTEXTPREDICATE_H
#define _CRMATCHTEXTPREDICATE_H

@class NSString;


#import "CRSearchPredicate.h"

@interface _CRMatchTextPredicate : CRSearchPredicate

@property (readonly) NSUInteger comparison; // ivar: _comparison
@property (readonly, copy) NSString *key; // ivar: _key
@property (readonly, copy) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asNSPredicate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 text:(id)arg1 comparison:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif