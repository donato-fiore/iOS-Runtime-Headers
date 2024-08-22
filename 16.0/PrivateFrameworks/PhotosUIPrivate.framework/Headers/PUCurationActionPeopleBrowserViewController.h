// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCURATIONACTIONPEOPLEBROWSERVIEWCONTROLLER_H
#define PUCURATIONACTIONPEOPLEBROWSERVIEWCONTROLLER_H

@class PXPeopleDetailSettingsViewController, NSMutableDictionary;


#import "PUCurationActionAssetBrowserViewController.h"
#import "PUCurationTraitContainer.h"

@interface PUCurationActionPeopleBrowserViewController : PXPeopleDetailSettingsViewController

@property (retain, nonatomic) PUCurationActionAssetBrowserViewController *assetBrowserViewController; // ivar: _assetBrowserViewController
@property (retain, nonatomic) NSMutableDictionary *detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier; // ivar: _detectionTraitsByFaceLocalIdentifierByPersonLocalIdentifier
@property (retain, nonatomic) NSMutableDictionary *facesByPersonLocalIdentifier; // ivar: _facesByPersonLocalIdentifier
@property (retain, nonatomic) PUCurationTraitContainer *traitContainer; // ivar: _traitContainer


-(id)initWithTraitContainer:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;


@end


#endif