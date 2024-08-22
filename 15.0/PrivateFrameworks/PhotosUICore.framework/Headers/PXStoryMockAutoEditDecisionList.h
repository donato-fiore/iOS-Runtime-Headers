// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYMOCKAUTOEDITDECISIONLIST_H
#define PXSTORYMOCKAUTOEDITDECISIONLIST_H

@class NSString;
@protocol PXStoryAutoEditDecisionList, PXAudioAsset;

#import <Foundation/Foundation.h>


@interface PXStoryMockAutoEditDecisionList : NSObject <PXStoryAutoEditDecisionList>



@property (readonly, nonatomic) BOOL allowsNUp; // ivar: _allowsNUp
@property (readonly, nonatomic) NSString *colorGradeCategory; // ivar: _colorGradeCategory
@property (readonly, nonatomic) NSString *decisionPapertrail;
@property (readonly, nonatomic) ? defaultDisplayAssetPresentationDuration; // ivar: _defaultDisplayAssetPresentationDuration
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSInteger numberOfClips; // ivar: _numberOfClips
@property (readonly, nonatomic) ? outroDuration; // ivar: _outroDuration
@property (readonly, nonatomic) ? overallDurationInfo; // ivar: _overallDurationInfo
@property (readonly, nonatomic) NSObject<PXAudioAsset> *song; // ivar: _song


-(id)clipAtIndex:(NSInteger)arg0 ;
-(id)clipForDisplayAsset:(id)arg0 ;
-(id)init;
-(id)initWithSong:(id)arg0 ;
-(void)enumerateClipsUsingBlock:(id)arg0 ;


@end


#endif