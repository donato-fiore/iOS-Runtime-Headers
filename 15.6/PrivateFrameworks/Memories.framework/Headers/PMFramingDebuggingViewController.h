// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMFRAMINGDEBUGGINGVIEWCONTROLLER_H
#define PMFRAMINGDEBUGGINGVIEWCONTROLLER_H

@class UIViewController, PHAssetCollection, UIButton, NSMutableArray, UILabel, PHAsset, UIImageView, UIStackView, NSDictionary, UITapGestureRecognizer, UITextView;



@interface PMFramingDebuggingViewController : UIViewController

@property (retain, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (retain, nonatomic) UIButton *changeDisplayedFramingButton; // ivar: _changeDisplayedFramingButton
@property (retain, nonatomic) NSMutableArray *correspondingClipForAsset; // ivar: _correspondingClipForAsset
@property (retain, nonatomic) UILabel *currentConfidenceLevels; // ivar: _currentConfidenceLevels
@property int currentFramingChoice; // ivar: _currentFramingChoice
@property (retain, nonatomic) UILabel *currentModeDisplayLabel; // ivar: _currentModeDisplayLabel
@property (retain, nonatomic) PHAsset *framingAsset; // ivar: _framingAsset
@property (retain, nonatomic) UIImageView *framingAssetImageView; // ivar: _framingAssetImageView
@property (retain, nonatomic) UIStackView *holdingStackView; // ivar: _holdingStackView
@property (retain, nonatomic) NSDictionary *kbHorizontalFramingAssetIDMap; // ivar: _kbHorizontalFramingAssetIDMap
@property (retain, nonatomic) NSDictionary *kbPlaybackSizeAssetIDMap; // ivar: _kbPlaybackSizeAssetIDMap
@property (retain, nonatomic) NSDictionary *kbVerticalFramingAssetIDMap; // ivar: _kbVerticalFramingAssetIDMap
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) UITextView *textOverlayView; // ivar: _textOverlayView


-(id)renderBoundingBoxToImage:(id)arg0 metadataRects:(id)arg1 playbackImageSize:(struct CGSize )arg2 normalized:(BOOL)arg3 flipYAxis:(BOOL)arg4 ;
-(id)renderSaliencyBoundingBoxToImage:(id)arg0 ;
-(struct CGRect )createInterestingRect;
-(struct CGRect )extendAllTheThings:(struct CGRect )arg0 alignment:(NSInteger)arg1 targetAspect:(float)arg2 imageSize:(struct CGSize )arg3 clipAspect:(float)arg4 ;
-(struct CGRect )petAndFaceRect;
-(struct CGRect )roundValuesInRect:(struct CGRect )arg0 ;
-(struct CGSize )targetSizeForInputAspect:(CGFloat)arg0 imageSize:(struct CGSize )arg1 ;
-(void)configureTapGestureRecognizer;
-(void)didSelectFramingMode:(id)arg0 ;
-(void)didTapImageView:(id)arg0 ;
-(void)displayAcceptableCrop;
-(void)displayContextInformationForAsset;
-(void)displayContextInformationForAssetCollection;
-(void)displayFeaturedFacesFoundInAsset;
-(void)displayImportantSubjectCriteria;
-(void)displayNUpFramingDecisions;
-(void)displayPetFaceUnionRect;
-(void)displayPreferredCrop;
-(void)displaySuggestedCrops;
-(void)displayUnionRect;
-(void)renderDetectedFaces;
-(void)renderDetectedPetFaces;
-(void)renderDetectedPets;
-(void)renderKBRects;
-(void)renderKBRectsVertical;
-(void)renderSaliencyImage;
-(void)renderSaliencyRectsForAsset:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif