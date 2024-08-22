// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACESECTIONCONTROLLER_H
#define MUPLACESECTIONCONTROLLER_H

@class NSString, MKMapItem, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate, MUPlaceSectionControllerDelegate;

#import <Foundation/Foundation.h>

#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlaceSectionController : NSObject <MUPlaceSectionControlling>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (readonly, nonatomic) int analyticsModuleType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUPlaceSectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView; // ivar: _sectionView
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus; // ivar: _submissionStatus
@property (readonly) Class superclass;


-(id)analyticsModule;
-(id)draggableContent;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)initWithMapItem:(id)arg0 ;
-(void)_populateAnalyticsModule:(id)arg0 ;
-(void)captureInfoCardAction:(int)arg0 eventValue:(id)arg1 ;
-(void)captureInfoCardAction:(int)arg0 eventValue:(id)arg1 feedbackType:(int)arg2 ;
-(void)captureInfoCardAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 ;


@end


#endif