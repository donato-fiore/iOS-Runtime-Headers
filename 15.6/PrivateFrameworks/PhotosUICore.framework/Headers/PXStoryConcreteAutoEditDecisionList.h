// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYCONCRETEAUTOEDITDECISIONLIST_H
#define PXSTORYCONCRETEAUTOEDITDECISIONLIST_H

@class NSString;
@protocol PXStoryAutoEditDecisionList, PXStoryAutoEditClipCatalog, PXAudioAsset;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteAutoEditDecisionList : NSObject <PXStoryAutoEditDecisionList>

 {
    id<PXStoryAutoEditClipCatalog> *_clipCatalog;
}


@property (readonly, nonatomic) BOOL allowsNUp; // ivar: _allowsNUp
@property (readonly, nonatomic) NSString *colorGradeCategory; // ivar: _colorGradeCategory
@property (readonly, nonatomic) NSString *decisionPapertrail;
@property (readonly, nonatomic) ? defaultDisplayAssetPresentationDuration; // ivar: _defaultDisplayAssetPresentationDuration
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSInteger numberOfClips;
@property (readonly, nonatomic) ? outroDuration; // ivar: _outroDuration
@property (readonly, nonatomic) ? overallDurationInfo; // ivar: _overallDurationInfo
@property (readonly, nonatomic) NSObject<PXAudioAsset> *song; // ivar: _song


-(id)clipAtIndex:(NSInteger)arg0 ;
-(id)clipForDisplayAsset:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithColorGradeCategory:(id)arg0 song:(id)arg1 clipCatalog:(id)arg2 constrainedOverallDurationInfo:(struct ? )arg3 outroDuration:(struct ? )arg4 ;
-(void)enumerateClipsUsingBlock:(id)arg0 ;


@end


#endif