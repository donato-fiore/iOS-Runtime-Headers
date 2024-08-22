// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STACTIVITYATTRIBUTIONCATALOGDIFF_H
#define STACTIVITYATTRIBUTIONCATALOGDIFF_H

@class NSDictionary, NSString;
@protocol STStatusDomainDataDiff, NSCopying;

#import <Foundation/Foundation.h>


@interface STActivityAttributionCatalogDiff : NSObject <STStatusDomainDataDiff, NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *attributionListDiffsByKey; // ivar: _attributionListDiffsByKey
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)diffFromCatalog:(id)arg0 toCatalog:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)catalogByApplyingToCatalog:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)diffByApplyingDiff:(id)arg0 ;
-(id)init;
-(id)initWithAttributionListDiffsByKey:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)applyToMutableCatalog:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif