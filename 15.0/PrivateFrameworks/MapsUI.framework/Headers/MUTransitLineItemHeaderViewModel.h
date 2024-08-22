// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUTRANSITLINEITEMHEADERVIEWMODEL_H
#define MUTRANSITLINEITEMHEADERVIEWMODEL_H

@class NSString, NSArray;
@protocol MUPlaceHeaderViewModel, GEOTransitLineItem;

#import <Foundation/Foundation.h>

#import "MULabeledTokenViewModel.h"

@interface MUTransitLineItemHeaderViewModel : NSObject <MUPlaceHeaderViewModel>

 {
    id<GEOTransitLineItem> *_lineItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MULabeledTokenViewModel *enclosingPlaceViewModel;
@property (readonly, nonatomic) BOOL hasEnclosingPlace;
@property (readonly, nonatomic) BOOL hasHeroImage;
@property (readonly, nonatomic) BOOL hasInitialData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *placeName;
@property (readonly, nonatomic) NSString *placeSecondaryName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *transitLabelItems;
@property (readonly, nonatomic, getter=isVerified) BOOL verified;


-(id)enclosingPlaceAttributedStringWithFont:(id)arg0 labelColor:(id)arg1 tokenColor:(id)arg2 ;
-(id)initWithTransitLineItem:(id)arg0 ;
-(void)loadHeroImageWithSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)refineEnclosingMapItemWithCompletion:(id)arg0 ;


@end


#endif