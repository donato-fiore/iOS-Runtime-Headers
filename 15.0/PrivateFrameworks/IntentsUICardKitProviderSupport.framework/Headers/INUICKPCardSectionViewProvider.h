// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INUICKPCARDSECTIONVIEWPROVIDER_H
#define INUICKPCARDSECTIONVIEWPROVIDER_H

@class NSString, NSArray;
@protocol INUICKPViewControllerAllocatingDelegate, CRKIdentifiedCardSectionViewProviding, INUICKPViewControllerAllocating, CRCard, CRKCardSectionViewProviderDelegate;

#import <Foundation/Foundation.h>


@interface INUICKPCardSectionViewProvider : NSObject <INUICKPViewControllerAllocatingDelegate, CRKIdentifiedCardSectionViewProviding>



@property (retain, nonatomic) NSObject<INUICKPViewControllerAllocating> *allocator; // ivar: _allocator
@property (readonly, nonatomic) NSObject<CRCard> *card; // ivar: _card
@property (weak, nonatomic) NSObject<CRKCardSectionViewProviderDelegate> *cardSectionViewProviderDelegate; // ivar: _cardSectionViewProviderDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *viewConfigurations; // ivar: _viewConfigurations


+(id)_viewConfigurationsFromAllocator:(id)arg0 ;
+(void)requestInstanceFromDefaultAllocatorWithCard:(id)arg0 delegate:(id)arg1 reply:(id)arg2 ;
+(void)requestInstanceWithCard:(id)arg0 delegate:(id)arg1 allocator:(id)arg2 reply:(id)arg3 ;
-(BOOL)vetoDisplayOfCardSection:(id)arg0 ;
-(CGFloat)boundingWidthForViewControllerAllocator:(id)arg0 ;
-(NSUInteger)displayPriorityForCardSection:(id)arg0 ;


@end


#endif