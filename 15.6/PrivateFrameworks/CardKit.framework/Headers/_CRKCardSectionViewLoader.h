// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CRKCARDSECTIONVIEWLOADER_H
#define _CRKCARDSECTIONVIEWLOADER_H

@class NSMutableDictionary, NSString, NSMutableSet;
@protocol CRKCardSectionViewSourcing, _CRKCardSectionViewLoaderDelegate, CRCard;

#import <Foundation/Foundation.h>


@interface _CRKCardSectionViewLoader : NSObject <CRKCardSectionViewSourcing>

 {
    NSMutableDictionary *_cardSectionViewConfigurationsByCardSectionIdentifiersByProviderIdentifiers;
    NSMutableDictionary *_vetoingProviderIdentifiersByVetoedCardSectionIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_CRKCardSectionViewLoaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *identifiedCardSectionViewProviders; // ivar: _identifiedCardSectionViewProviders
@property (retain, nonatomic) NSObject<CRCard> *loadedCard; // ivar: _loadedCard
@property (readonly) Class superclass;


-(BOOL)cardSectionShouldBeDisplayed:(id)arg0 ;
-(id)_allViewConfigurations;
-(id)_viewConfigurationForCardSection:(id)arg0 providerIdentifier:(id)arg1 ;
-(id)init;
-(id)viewConfigurationForCardSection:(id)arg0 ;
-(void)_loadIdentifiedCardSectionViewProvidersFromCard:(id)arg0 identifiedProviders:(id)arg1 delegate:(id)arg2 completion:(id)arg3 ;


@end


#endif