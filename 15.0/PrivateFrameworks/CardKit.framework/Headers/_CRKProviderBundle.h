// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CRKPROVIDERBUNDLE_H
#define _CRKPROVIDERBUNDLE_H

@class NSBundle, NSString;
@protocol CRKIdentifiedProviding, CRKProviding;



@interface _CRKProviderBundle : NSBundle <CRKIdentifiedProviding>

 {
    id<CRKProviding> *_provider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) Class superclass;


-(NSUInteger)displayPriorityForCard:(id)arg0 ;
-(id)cardViewControllerForCard:(id)arg0 ;
-(id)provider;
-(void)_initializeProviderWithClass:(Class)arg0 ;
-(void)presentation:(id)arg0 didApplyCardSectionViewSource:(id)arg1 toCardViewController:(id)arg2 ;
-(void)requestCardSectionViewProviderForCard:(id)arg0 delegate:(id)arg1 reply:(id)arg2 ;
-(void)requestIdentifiedCardSectionViewProviderForCard:(id)arg0 delegate:(id)arg1 reply:(id)arg2 ;


@end


#endif