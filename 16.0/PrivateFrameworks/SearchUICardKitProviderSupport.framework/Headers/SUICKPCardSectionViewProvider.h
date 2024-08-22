// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUICKPCARDSECTIONVIEWPROVIDER_H
#define SUICKPCARDSECTIONVIEWPROVIDER_H

@class NSString, NSArray;
@protocol CRKIdentifiedCardSectionViewProviding, CRCard, CRKCardSectionViewProviderDelegate;

#import <Foundation/Foundation.h>

#import "SUICKPFeedbackDelegateDemultiplexer.h"

@interface SUICKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding>

 {
    SUICKPFeedbackDelegateDemultiplexer *_feedbackDelegateDemux;
}


@property (readonly, nonatomic) NSObject<CRCard> *card; // ivar: _card
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRKCardSectionViewProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *viewConfigurations; // ivar: _viewConfigurations


-(NSUInteger)displayPriorityForCardSection:(id)arg0 ;
-(id)initWithCard:(id)arg0 ;


@end


#endif