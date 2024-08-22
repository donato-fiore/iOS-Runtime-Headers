// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STACTIVITYATTRIBUTIONCATALOG_H
#define STACTIVITYATTRIBUTIONCATALOG_H

@class NSArray, NSMutableDictionary, NSString;
@protocol STStatusDomainData, STStatusDomainDataDifferencing, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STActivityAttributionCatalog : NSObject <STStatusDomainData, STStatusDomainDataDifferencing, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSMutableDictionary *attributionsByKey; // ivar: _attributionsByKey
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributionsForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataByApplyingDiff:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)diffFromData:(id)arg0 ;
-(id)init;
-(id)initWithAttributionsByKey:(id)arg0 ;
-(id)initWithCatalog:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAttributionsUsingBlock:(id)arg0 ;


@end


#endif