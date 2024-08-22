// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKUSERDOMAINCONCEPTLINKCOLLECTION_H
#define HKUSERDOMAINCONCEPTLINKCOLLECTION_H

@class NSArray;
@protocol NSCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface HKUserDomainConceptLinkCollection : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>



@property (readonly, nonatomic) NSInteger count;
@property (readonly, copy, nonatomic) NSArray *links; // ivar: _links


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLinks:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif