// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYCONCRETESTYLE_H
#define PXSTORYCONCRETESTYLE_H

@class NSArray, PFStoryAutoEditConfiguration, NSString;
@protocol PXStoryStyle, PXStoryAutoEditDecisionList, PXAudioCueSource, PXStorySongResource;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteStyle : NSObject <PXStoryStyle>

 {
    NSArray *_allowedKeyAssetClipCompositionsInPortrait;
    NSArray *_allowedKeyAssetClipCompositionsInLandscape;
    NSArray *_allowedClipCompositionsInPortrait;
    NSArray *_allowedClipCompositionsInLandscape;
    NSArray *_allowedClipCompositionsInSquareView;
    PFStoryAutoEditConfiguration *_autoEditConfiguration;
}


@property (readonly, nonatomic) NSObject<PXStoryAutoEditDecisionList> *autoEditDecisionList; // ivar: _autoEditDecisionList
@property (readonly, nonatomic) NSObject<PXAudioCueSource> *cueSource; // ivar: _cueSource
@property (readonly, nonatomic) NSInteger customColorGradeKind; // ivar: _customColorGradeKind
@property (readonly, nonatomic) BOOL isCustomized; // ivar: _isCustomized
@property (readonly, nonatomic) NSString *originalColorGradeCategory; // ivar: _originalColorGradeCategory
@property (readonly, nonatomic) ? outroDuration;
@property (readonly, nonatomic) NSObject<PXStorySongResource> *songResource; // ivar: _songResource
@property (readonly, nonatomic) ? styleOptions; // ivar: _styleOptions
@property (readonly, nonatomic) Class timelineStyleClass;


+(id)bestClipCompositionFromClipCompositions:(id)arg0 forKeyAsset:(id)arg1 contentInfo:(struct ? *)arg2 playbackStyle:(NSInteger)arg3 spec:(id)arg4 croppingContext:(id)arg5 options:(NSUInteger)arg6 ;
-(id)createRandomNumberGenerators;
-(id)description;
-(id)init;
-(id)initWithCustomColorGradeKind:(NSInteger)arg0 originalColorGradeCategory:(id)arg1 songResource:(id)arg2 cueSource:(id)arg3 autoEditDecisionList:(id)arg4 styleOptions:(struct ? )arg5 isCustomized:(BOOL)arg6 ;
-(id)timelineStyleWithSpec:(id)arg0 resourcesDataSource:(id)arg1 randomNumberGenerators:(id)arg2 errorReporter:(id)arg3 ;


@end


#endif