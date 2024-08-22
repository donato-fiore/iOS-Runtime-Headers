// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASIMMUTABLEDOMAINSELECTION_H
#define _PASIMMUTABLEDOMAINSELECTION_H

@class PASDomainSelection, NSSet;



@interface _PASImmutableDomainSelection : PASDomainSelection {
    NSSet *_domains;
}




-(BOOL)containsDomain:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqualToDomainSelection:(id)arg0 ;
-(id)_initWithNonOverlappingDomainSet:(id)arg0 ;
-(id)allDomains;


@end


#endif