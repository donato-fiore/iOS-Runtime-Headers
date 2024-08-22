// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKUSERDOMAINCONCEPTQUERYRESULT_H
#define _HKUSERDOMAINCONCEPTQUERYRESULT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKUserDomainConcept.h"

@interface _HKUserDomainConceptQueryResult : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger anchor; // ivar: _anchor
@property (copy, nonatomic) HKUserDomainConcept *concept; // ivar: _concept


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConcept:(id)arg0 anchor:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif