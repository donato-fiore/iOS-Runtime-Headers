// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUICKPENTRYPOINT_H
#define SUICKPENTRYPOINT_H

@class NSString;
@protocol CRKIdentifiedProviding;

#import <Foundation/Foundation.h>

#import "SUICKPCardViewControllerProvider.h"

@interface SUICKPEntryPoint : NSObject <CRKIdentifiedProviding>

 {
    SUICKPCardViewControllerProvider *_cardViewControllerProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) Class superclass;


-(NSUInteger)displayPriorityForCard:(id)arg0 ;
-(id)cardViewControllerForCard:(id)arg0 ;
-(id)init;
-(void)presentation:(id)arg0 didApplyCardSectionViewSource:(id)arg1 toCardViewController:(id)arg2 ;
-(void)requestCardSectionViewProviderForCard:(id)arg0 delegate:(id)arg1 reply:(id)arg2 ;
-(void)requestIdentifiedCardSectionViewProviderForCard:(id)arg0 delegate:(id)arg1 reply:(id)arg2 ;


@end


#endif