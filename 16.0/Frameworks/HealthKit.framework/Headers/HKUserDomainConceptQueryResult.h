// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKUSERDOMAINCONCEPTQUERYRESULT_H
#define HKUSERDOMAINCONCEPTQUERYRESULT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKQueryAnchor.h"
#import "HKUserDomainConcept.h"

@interface HKUserDomainConceptQueryResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HKQueryAnchor *anchor;
@property (readonly, copy, nonatomic) HKUserDomainConcept *concept; // ivar: _concept
@property (readonly, nonatomic) NSInteger rawAnchor; // ivar: _rawAnchor


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConcept:(id)arg0 rawAnchor:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif