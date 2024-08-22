// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROAUTOEDITMULTIUPCONTROLLER_H
#define MIROAUTOEDITMULTIUPCONTROLLER_H

@class NSArray, NSDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "MiroBlueprint.h"
#import "MiroAutoEditKenBurnsController.h"
#import "MiroPickList.h"
#import "MiroAutoEditProjectPolish.h"
#import "Project.h"

@interface MiroAutoEditMultiUpController : NSObject

@property (nonatomic) NSUInteger altStyle; // ivar: _altStyle
@property (retain, nonatomic) MiroBlueprint *blueprint; // ivar: _blueprint
@property (retain, nonatomic) NSArray *chronologicallyOrderedAssets; // ivar: _chronologicallyOrderedAssets
@property (retain, nonatomic) NSDictionary *featuredPersonsInMemoryAsFaceRanges; // ivar: _featuredPersonsInMemoryAsFaceRanges
@property (retain, nonatomic) MiroAutoEditKenBurnsController *kbController; // ivar: _kbController
@property (nonatomic) NSUInteger memoryCategory; // ivar: _memoryCategory
@property (retain, nonatomic) NSDictionary *memoryFeaturesPersonInAsset; // ivar: _memoryFeaturesPersonInAsset
@property (nonatomic) NSUInteger memorySubcategory; // ivar: _memorySubcategory
@property (nonatomic) BOOL memoryTypeDisablesCropping; // ivar: _memoryTypeDisablesCropping
@property (weak, nonatomic) MiroPickList *picklist; // ivar: _picklist
@property (retain, nonatomic) MiroAutoEditProjectPolish *polishController; // ivar: _polishController
@property (retain, nonatomic) Project *project; // ivar: _project
@property (nonatomic) NSArray *projectLayoutClips; // ivar: _projectLayoutClips
@property (retain, nonatomic) NSMutableArray *selectedPeers; // ivar: _selectedPeers


-(BOOL)clipIsMultiCandidate:(id)arg0 ;
-(BOOL)findMultiUpPeers:(id)arg0 forLayoutClip:(id)arg1 ;
-(BOOL)peer:(id)arg0 couldSupportAsset:(id)arg1 ;
-(BOOL)selectedPeersContains:(id)arg0 ;
-(id)allowedAssetsChronologically;
-(id)appropriateDistancePeersFrom:(id)arg0 comparingTo:(id)arg1 ;
-(id)bestPeersBetweenClip:(id)arg0 and:(id)arg1 withCurrent:(id)arg2 ;
-(id)pickBetweenClipA:(id)arg0 andClipB:(id)arg1 forLayoutClip:(id)arg2 ;
-(id)selectLayoutPeerFrom:(id)arg0 ;
-(int)multiUpTypeForLayoutClip:(id)arg0 andPeer:(id)arg1 ;
-(void)adjustKBRectanglesForClip:(id)arg0 animationStyle:(NSUInteger)arg1 aspect:(CGFloat)arg2 ;
-(void)createAndReplaceMultiUpForLayoutClip:(id)arg0 ;
-(void)ensureMultiUpMovieClipIsFirstClip:(id)arg0 ;
-(void)evaluatePossilbeInEditMultiUpPeers:(id)arg0 forLayoutClip:(id)arg1 ;
-(void)prepareAltClip:(id)arg0 andClip:(id)arg1 fromSelectedPeer:(id)arg2 forAspect:(CGFloat)arg3 ;


@end


#endif