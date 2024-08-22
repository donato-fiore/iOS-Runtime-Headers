// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSREGIONMAPSNAPSHOT_H
#define _UIFOCUSREGIONMAPSNAPSHOT_H

@class NSArray, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "_UIFocusRegionMapSnapshotRequest.h"
#import "UIImage.h"

@interface _UIFocusRegionMapSnapshot : NSObject <NSCopying>

 {
    BOOL _isFocusedRectEmpty;
    BOOL _didSetRegionClipFrame;
    CGRect _regionClipFrame;
}


@property (readonly, copy, nonatomic) NSArray *allFocusableRegionMapEntries;
@property (nonatomic) BOOL clipToSnapshotRect; // ivar: _clipToSnapshotRect
@property (nonatomic, getter=isCommitted) BOOL committed; // ivar: _committed
@property (retain, nonatomic) NSMutableArray *detectedFocusContainerGuideMapEntries; // ivar: _detectedFocusContainerGuideMapEntries
@property (retain, nonatomic) NSMutableArray *detectedFocusableGuideMapEntries; // ivar: _detectedFocusableGuideMapEntries
@property (retain, nonatomic) NSMutableArray *detectedFocusableViewMapEntries; // ivar: _detectedFocusableViewMapEntries
@property (copy, nonatomic) NSArray *finalFocusableRegionMapEntries; // ivar: _finalFocusableRegionMapEntries
@property (nonatomic) NSUInteger focusHeading; // ivar: _focusHeading
@property (weak, nonatomic) UIView *focusableRegionAncestorView; // ivar: _focusableRegionAncestorView
@property (nonatomic) CGRect focusedRect; // ivar: _focusedRect
@property (readonly, nonatomic) CGRect mapEntriesFrame; // ivar: _mapEntriesFrame
@property (nonatomic, getter=isPrivateSnapshot) BOOL privateSnaphot; // ivar: _privateSnaphot
@property (readonly, copy, nonatomic) _UIFocusRegionMapSnapshotRequest *request; // ivar: _request
@property (retain, nonatomic) NSMutableArray *retainedPromiseRegions; // ivar: _retainedPromiseRegions
@property (readonly, weak, nonatomic) UIView *rootView; // ivar: _rootView
@property (readonly, nonatomic) CGRect snapshottedRect; // ivar: _snapshottedRect
@property (copy, nonatomic) NSArray *sortedFocusContainerGuideMapEntries; // ivar: _sortedFocusContainerGuideMapEntries
@property (readonly, nonatomic) UIImage *visualRepresentation; // ivar: _visualRepresentation
@property (nonatomic) CGRect visualRepresentationMinimumArea; // ivar: _visualRepresentationMinimumArea
@property (nonatomic) CGPoint visualRepresentationScreenCenter; // ivar: _visualRepresentationScreenCenter


+(id)combinedVisualRepresentationForSnapshots:(id)arg0 scaleFactor:(CGFloat)arg1 ;
-(id)_finalFocusableRegionMapEntriesFromMapEntries:(id)arg0 ;
-(id)_finalFocusableRegionMapEntriesFromViewMapEntries:(id)arg0 guideMapEntries:(id)arg1 ;
-(id)_initWithRequest:(id)arg0 ;
-(id)_snapshotByFulfillingPromiseFocusRegionEntry:(id)arg0 ;
-(id)_sortedEligibleFocusContainerGuidesInArray:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugQuickLookObject;
-(id)focusableRegionMapEntriesLimitedByFocusContainerGuide:(id)arg0 ;
-(id)visualRepresentationWithMinimumArea:(struct CGRect )arg0 ;
-(struct CGRect )_clippedRegionFrame:(struct CGRect )arg0 isFocusGuide:(BOOL)arg1 ;
-(void)_addFocusContainerGuide:(id)arg0 withFrame:(struct CGRect )arg1 ;
-(void)_addFocusableRegion:(id)arg0 isFocusGuide:(BOOL)arg1 withFrame:(struct CGRect )arg2 ;
-(void)_commit;
-(void)_didChooseFocusCandidateRegion:(id)arg0 ;
-(void)_occludeFocusInFrame:(struct CGRect )arg0 ;
-(void)_punchHoleInMap:(id)arg0 atFrame:(struct CGRect )arg1 ;
-(void)_updateFinalFocusableRegionMapEntries;
-(void)_updateSortedFocusContainerGuideMapEntries;


@end


#endif