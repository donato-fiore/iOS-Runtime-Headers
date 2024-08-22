// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANFUNDINGSOURCEROW_H
#define PKPAYLATERFINANCINGPLANFUNDINGSOURCEROW_H

@class PKPayLaterFinancingPlanFundingSource, NSString;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanFundingSourceRow : NSObject <PKPayLaterCollectionViewRow>

 {
    PKPayLaterFinancingPlanFundingSource *_fundingSource;
    id *_selectionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlightItem;
-(Class)cellClass;
-(id)initWithFinancingPlanFundingSource:(id)arg0 selectionHandler:(id)arg1 ;
-(void)configureCell:(id)arg0 ;
-(void)handleCellSelection;


@end


#endif