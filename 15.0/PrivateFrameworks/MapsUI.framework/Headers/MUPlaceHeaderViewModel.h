// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACEHEADERVIEWMODEL_H
#define MUPLACEHEADERVIEWMODEL_H

@class MKMapItem, NSString, MKMapItemIdentifier, NSArray;
@protocol MUPlaceHeaderViewModel;

#import <Foundation/Foundation.h>

#import "MULabeledTokenViewModel.h"

@interface MUPlaceHeaderViewModel : NSObject <MUPlaceHeaderViewModel>

 {
    MKMapItem *_mapItem;
    MKMapItem *_enclosingMapItem;
    NSString *_labelString;
    NSString *_enclosingPlaceString;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MKMapItemIdentifier *enclosingMapItemIdentifier;
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
-(id)initWithMapItem:(id)arg0 ;
-(void)_buildEnclosingPlace;
-(void)loadHeroImageWithSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)refineEnclosingMapItemWithCompletion:(id)arg0 ;


@end


#endif