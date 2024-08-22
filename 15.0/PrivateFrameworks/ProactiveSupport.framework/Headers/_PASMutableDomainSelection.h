// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASMUTABLEDOMAINSELECTION_H
#define _PASMUTABLEDOMAINSELECTION_H

@class PASDomainSelection, NSMutableDictionary;



@interface _PASMutableDomainSelection : PASDomainSelection {
    NSMutableDictionary *_domains;
    NSUInteger _count;
    BOOL _taintedByDeepDomain;
}




-(BOOL)_addDomainsFrom:(id)arg0 ;
-(BOOL)_addDomainsFromOtherDictionary:(id)arg0 toOwnDictionary:(id)arg1 ownDictionaryIsPlaceholder:(BOOL)arg2 ;
-(BOOL)addDomain:(id)arg0 ;
-(BOOL)addDomainsFromArray:(id)arg0 ;
-(BOOL)addDomainsFromSelection:(id)arg0 ;
-(BOOL)addDomainsFromSet:(id)arg0 ;
-(BOOL)containsDomain:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqualToDomainSelection:(id)arg0 ;
-(NSUInteger)count;
-(id)_initWithNonOverlappingDomainSet:(id)arg0 ;
-(id)allDomains;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_decrementCountAndMaybePruneItems:(id)arg0 ;
-(void)dealloc;


@end


#endif