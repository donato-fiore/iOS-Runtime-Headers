// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICATTRIBUTIONLAYOUTMANAGER_H
#define ICATTRIBUTIONLAYOUTMANAGER_H

@class TTTextEditGrouper, TTTextEditFilter, NSManagedObjectContext, NSDate, NSNumber, NSArray;

#import <Foundation/Foundation.h>

#import "ICBaseTextView.h"

@interface ICAttributionLayoutManager : NSObject

@property (nonatomic) CGFloat appliedHorizontalAdjustment; // ivar: _appliedHorizontalAdjustment
@property (readonly, nonatomic) CGFloat appliedHorizontalAdjustmentRatio; // ivar: _appliedHorizontalAdjustmentRatio
@property (nonatomic) CGFloat currentTextViewOffset; // ivar: _currentTextViewOffset
@property (retain, nonatomic) TTTextEditGrouper *editGrouper; // ivar: _editGrouper
@property (copy, nonatomic) TTTextEditFilter *filter; // ivar: _filter
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (readonly, copy, nonatomic) NSDate *noteLastOpenedDate; // ivar: _noteLastOpenedDate
@property (copy, nonatomic) NSNumber *overrideZoomFactor; // ivar: _overrideZoomFactor
@property (nonatomic) CGFloat panelWidth; // ivar: _panelWidth
@property (readonly, nonatomic) CGFloat preferredHighlightValue; // ivar: _preferredHighlightValue
@property (nonatomic) CGFloat previewPanelWidth; // ivar: _previewPanelWidth
@property (readonly, weak, nonatomic) ICBaseTextView *textView; // ivar: _textView
@property (copy, nonatomic) id *updatedConfigurationHandler; // ivar: _updatedConfigurationHandler
@property (copy, nonatomic) NSArray *viewConfigurations; // ivar: _viewConfigurations
@property (readonly, nonatomic) NSArray *visibleConfigurations;
@property (nonatomic) CGFloat visiblePanelWidth; // ivar: _visiblePanelWidth


+(id)reloadQueue;
-(id)initWithTextView:(id)arg0 managedObjectContext:(id)arg1 panelWidth:(CGFloat)arg2 previewPanelWidth:(CGFloat)arg3 ;
-(void)addObservers;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reloadConfigurationsWithCompletion:(id)arg0 ;
-(void)reloadViewConfigurationsSynchronously;
-(void)removeObservers;
-(void)updateViewConfigurationsForTextViewOffset;


@end


#endif