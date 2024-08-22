// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASDOMAINSELECTION_H
#define _PASDOMAINSELECTION_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PASDomainSelection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(BOOL)containsDomain:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDomainSelection:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(id)_initWithNonOverlappingDomainSet:(id)arg0 ;
-(id)allDomains;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)globPatterns;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 ;
-(id)initWithDomainsFromArray:(id)arg0 ;
-(id)initWithDomainsFromSet:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif