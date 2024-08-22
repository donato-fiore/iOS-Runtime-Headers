// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEHEADERVIEWMODEL_H
#define MUPLACEHEADERVIEWMODEL_H

@class MKMapItem, NSString, UIColor, MKMapItemIdentifier, NSArray;
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


@property (readonly, nonatomic, getter=isClaimed) BOOL claimed;
@property (readonly, nonatomic) UIColor *coverPhotoBackgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MKMapItemIdentifier *enclosingMapItemIdentifier;
@property (readonly, nonatomic) MULabeledTokenViewModel *enclosingPlaceViewModel;
@property (readonly, nonatomic) BOOL hasEnclosingPlace;
@property (readonly, nonatomic) BOOL hasHeroImage;
@property (readonly, nonatomic) BOOL hasInitialData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *logoBackgroundColor;
@property (readonly, nonatomic) NSString *placeName;
@property (readonly, nonatomic) NSString *placeSecondaryName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsEnhancedBusinessHeader;
@property (readonly, nonatomic) BOOL supportsLogo;
@property (readonly, nonatomic) NSArray *transitLabelItems;
@property (readonly, nonatomic, getter=isVerified) BOOL verified;


-(id)enclosingPlaceAttributedStringWithFont:(id)arg0 labelColor:(id)arg1 tokenColor:(id)arg2 ;
-(id)initWithMapItem:(id)arg0 ;
-(void)_buildEnclosingPlace;
-(void)loadCoverPhotoWithSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)loadHeroImageWithSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)loadVerifiedLogoImageWithSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)refineEnclosingMapItemWithCompletion:(id)arg0 ;


@end


#endif