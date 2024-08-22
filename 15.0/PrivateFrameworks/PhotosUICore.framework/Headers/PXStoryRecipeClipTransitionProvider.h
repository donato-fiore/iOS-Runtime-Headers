// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYRECIPECLIPTRANSITIONPROVIDER_H
#define PXSTORYRECIPECLIPTRANSITIONPROVIDER_H

@class PFStoryAutoEditFrequencyTable, PFStoryAutoEditConfiguration;
@protocol PFRandomNumberGenerator;

#import <Foundation/Foundation.h>


@interface PXStoryRecipeClipTransitionProvider : NSObject {
    PFStoryAutoEditFrequencyTable *_baseTransitionTable;
    PFStoryAutoEditFrequencyTable *_interMomentTransitionTable;
    PFStoryAutoEditFrequencyTable *_portraitTransitionTable;
    PFStoryAutoEditFrequencyTable *_nUpTransitionTable;
    PFStoryAutoEditFrequencyTable *_interModuleTransitionTable;
    id<PFRandomNumberGenerator> *_randomNumberGenerator;
}


@property (readonly, nonatomic) PFStoryAutoEditConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSInteger songPace; // ivar: _songPace


-(BOOL)_cameraMovement:(NSInteger)arg0 allowsTransition:(NSInteger)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 colorGradeCategory:(id)arg1 songPace:(NSInteger)arg2 randomNumberGenerator:(id)arg3 ;
-(struct ? )_nextTransitionFromTable:(id)arg0 currentMotion:(struct ? )arg1 nextMotion:(struct ? )arg2 ;
-(struct ? )nextIntraMomentTransition;
-(void)provideTransitionsForMomentClipRange:(struct _NSRange )arg0 withClipCatalog:(id)arg1 usingBlock:(id)arg2 ;


@end


#endif