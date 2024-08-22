// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSURVEYQUESTIONGADGET_H
#define PXSURVEYQUESTIONGADGET_H

@class NSString, NSSet, UIImage, PHQuestion;
@protocol PXGadget, PXSurveyQuestionsGadgetContentViewDelegate, PXSurveyQuestionConfiguration, PXGadgetDelegate;

#import <Foundation/Foundation.h>

#import "PXSurveyQuestionsGadgetContentView.h"
#import "PXGadgetSpec.h"
#import "PXSurveyQuestionConfigurationHandlers.h"
#import "PXRegionOfInterest.h"

@interface PXSurveyQuestionGadget : NSObject <PXGadget, PXSurveyQuestionsGadgetContentViewDelegate>

 {
    NSInteger _configurationRequestId;
}


@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (nonatomic) NSUInteger answer; // ivar: _answer
@property (retain, nonatomic) NSSet *assetUUIDsAssociatedWithGadget; // ivar: _assetUUIDsAssociatedWithGadget
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, nonatomic) NSObject<PXSurveyQuestionConfiguration> *configuration;
@property (nonatomic, getter=isContentHidden) BOOL contentHidden; // ivar: _contentHidden
@property (retain, nonatomic) PXSurveyQuestionsGadgetContentView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UIImage *currentImage;
@property (nonatomic) BOOL currentlyInOneUp; // ivar: _currentlyInOneUp
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType; // ivar: _gadgetType
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger priority;
@property (readonly, nonatomic) PHQuestion *question; // ivar: _question
@property (readonly, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;


+(id)sharedWorkQueue;
+(unsigned int)confirmYesSoundID;
+(void)preloadResources;
-(BOOL)isEqual:(id)arg0 ;
-(id)additionalReasonsForWallpaperQuestionsForAnswer:(NSUInteger)arg0 ;
-(id)gadgetContentView:(id)arg0 additionalReasonMessageForAnswer:(NSUInteger)arg1 ;
-(id)gadgetContentView:(id)arg0 additionalReasonTitleForAnswer:(NSUInteger)arg1 ;
-(id)gadgetContentView:(id)arg0 additionalReasonsForAnswer:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithSurveyQuestion:(id)arg0 gadgetType:(NSUInteger)arg1 ;
-(id)uniqueGadgetIdentifier;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_didFinishUpdatingSurveyQuestionStateFromAnswer;
-(void)_playConfirmYesSound;
-(void)_updateContentViewConfiguration;
-(void)_updateSurveyQuestionStateFromAnswer:(NSUInteger)arg0 andReason:(id)arg1 ;
-(void)gadgetContentView:(id)arg0 didAnswer:(NSUInteger)arg1 withReason:(id)arg2 ;
-(void)prepareCollectionViewItem:(id)arg0 ;
-(void)refreshQuestionContentView;
-(void)removeCollectionViewItem:(id)arg0 ;


@end


#endif